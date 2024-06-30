#include <QDialog>
#include <QWidget>
#include <QStackedWidget>
#include <QMessageBox>
#include <QBoxLayout>
#include <QLabel>
#include <QTimer>
#include <QtGlobal>
#include <QDateTime>
#include <QMenu>
#include <QFont>
#include <QTimer>
#include <QPixmap>
#include <QGraphicsOpacityEffect>
#include <QAudio>
#include <algorithm>
#include <stdlib.h>
#include <stdio.h>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "decorator.h"
#include "supply_window.h"
#include "tomo.h"
#include "arrange_create.h"
#include "arrange_change.h"
#include "tmap_change.h"
#include "tmap_create.h"

bool fl_w_ct=false,fl_w_dc=false,fl_music=true;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //窗口调整与全局变量设置
    ui->setupUi(this);
    this->setFixedSize(960, 640); // 设置窗口大小
    this->setFont(globalfont);
    clo=0,deltmap=0,delddl=0;
    for(int i=0;i<100;++i){
        delddl2[i]=false;
    }
    QTimer  * timer =  new QTimer(this);    //定时器
    connect(timer,&QTimer::timeout,this,&MainWindow::stopclock);//信号槽 定时器时间到 启动 showtime
    timer->start(1000);//间隔1000ms(1s)
    stdate=QDateTime::fromString("2024-01-01 00:00:00", "yyyy-MM-dd hh:mm:ss");
    globalpath = "D:/Programs/FOUNDATION/Code/QT/timecontroller/user_data/user001/global.txt";
    FILE *file = fopen(globalpath.toStdString().c_str(), "r");
    if(file==NULL){
        qDebug()<<"文件打开失败";
    }
    else{
        char StrLine[1024];
        fgets(StrLine,1024,file);
        globalheader = QString::fromUtf8(StrLine);
        globalheader = globalheader.remove(globalheader.length()-1,1);
        fgets(StrLine,1024,file);
        weekpass=atoi(StrLine);
        fclose(file);
        ui->lineEdit->setText(QString("%1").arg(weekpass));
    }
    QString path = ":/images/image/bgimage3.jpg";//背景路径
    setStyleSheet("QWidget#MainWindow { background-image: url('" + path + "');background-repeat: no-repeat;background-position: center;}");
    QPixmap pixmap(globalheader);
    pixmap=pixmap.scaled(90,90);
    this->ui->labelheader->setPixmap(pixmap);

    //调用与隐藏
    decorator * w_decor = new decorator(this);//注意：此处不能强制类型转换，否则会出大问题
    w_decor->hide();
    w_dc=new DigitalClock(60);
    w_dc->hide();
    createtask* w_ct=new createtask();
    w_ct->hide();
    w_ct->setModal(true);
    player = new QMediaPlayer(this);
    player->setSource(QUrl::fromLocalFile("D:/Programs/FOUNDATION/Code/QT/timecontroller/user_data/user001/music1.mp3"));
    QAudioOutput *audioOutput= new QAudioOutput(this);
    player->setAudioOutput(audioOutput);
    readQArrange();
    sortArrange();
    writeQArrange();
    readQMap();
    writeQMap();
    setmap();

    //滑动部分
    //创建一个子窗口，这个子窗口交给滚动区域
    myWidget = new QWidget(this);       //新建一个QWidget放在scrollArea中
    layoutbox = new QVBoxLayout();    //创建一个布局管理器放在QWidget中
    QGraphicsOpacityEffect* opacityEffect = new QGraphicsOpacityEffect();
    opacityEffect->setOpacity(0.7); // 设置透明度为70%
    myWidget->setGraphicsEffect(opacityEffect);
    myWidget->setStyleSheet("QWidget#myWidget{border-radius:30px;}");
    QPushButton *btnadd = new QPushButton();
    layoutbox->addWidget(btnadd);
    buttons.insert(btnadd);
    btnadd->resize(135,60);
    btnadd->setMinimumSize(135,60);
    btnadd->setMaximumSize(135,60);
    btnadd ->setText("新建DDL");
    btnadd->setStyleSheet("QPushButton { background-color: transparent;border: 1px solid black; }");
    ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    for(int i = 0 ; i < arrnum; i++){
        QPushButton *btn = new QPushButton();   //创建需要的按钮
        layoutbox->addWidget(btn);                 //布局管理器内添加按钮控件
        btn->resize(135,60);                    //设置按钮大小
        btn->setMinimumSize(135,60);
        btn->setMaximumSize(135,60);
        buttons.insert(btn);
        btn->setText(arrangements[i]->name);
        if(QDateTime::currentDateTime().secsTo(arrangements[i]->dt)/86400<0)
            btn->setStyleSheet("QPushButton { background-color: yellow;border: 1px solid black; }");
        else if(QDateTime::currentDateTime().secsTo(arrangements[i]->dt)/86400<5)
            btn->setStyleSheet("QPushButton { background-color: red;border: 1px solid black; }");
        else
            btn->setStyleSheet("QPushButton { background-color: transparent;border: 1px solid black; }");
        pBtnGroup[i]=btn;
    }
    myWidget->setLayout(layoutbox);                //给前面的widget设置布局管理器
    ui->scrollArea->setWidget(myWidget);        //把widget添加到滚动区域scrollArea中

    //日期部分
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//延伸显示(水平铺满)
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);  //延伸显示(垂直铺满)
    QStringList verHeader;	//行表头
    verHeader << "8:00~9:00" << "8:00~9:00" << "8:00~9:00" << "8:00~9:00" << "8:00~9:00" << "8:00~9:00" << "8:00~9:00" << "8:00~9:00" << "8:00~9:00" << "8:00~9:00" << "8:00~9:00" ;
    ui->tableWidget->setRowCount(verHeader.size());
    ui->tableWidget->setVerticalHeaderLabels(verHeader);
    QStringList horHeader;	//行表头
    horHeader << "Monday" << "Tuesday" << "Wednesday" << "Thursday" << "Friday" << "Saturday"<< "Sunday";
    ui->tableWidget->setColumnCount(horHeader.size());
    ui->tableWidget->setHorizontalHeaderLabels(horHeader);
    setmap();

    //页面转换
    connect(ui->decorate,&QPushButton::clicked,w_decor,[=](){
            w_decor->show();
            emit senddata1(globalfont);
    });
    connect(this,SIGNAL(senddata1(QFont)),w_decor,SLOT(getfont(QFont)));
    connect(w_decor,SIGNAL(sendfont(QFont)),this,SLOT(getfont(QFont)));
    connect(w_decor,SIGNAL(sendheader(QStringList)),this,SLOT(getheader(QStringList)));

    /*ddls*/
    //按钮添加
    connect(btnadd,&QPushButton::clicked,ui->line,[=](){
        createtask* w_crt=new createtask;
        connect(w_crt,SIGNAL(senddatetime(QDateTime)),this,SLOT(getdatetime(QDateTime)));
        connect(w_crt,SIGNAL(sendqstring(QString)),this,SLOT(getqstring(QString)));
        int w_return=w_crt->exec();
        if(w_return==QDialog::Accepted)
        {
            //储存相应记忆
            arrangements[arrnum]=new arrange(nddlname,ndatetime);
            arrnum++;
            sortArrange();
            writeQArrange();
            QPushButton *btn = new QPushButton();
            layoutbox->addWidget(btn);
            pBtnGroup[arrnum-1]=btn;
            btn->resize(135,60);
            btn->setMinimumSize(135,60);
            btn->setMaximumSize(135,60);
            buttons.insert(btn);
            for(int i=0;i<arrnum;++i){
                pBtnGroup[i]->setText(arrangements[i]->name);
                if(QDateTime::currentDateTime().secsTo(arrangements[i]->dt)/86400<0)
                    pBtnGroup[i]->setStyleSheet("QPushButton { background-color: yellow;border: 1px solid black; }");
                else if(QDateTime::currentDateTime().secsTo(arrangements[i]->dt)/86400<5)
                    pBtnGroup[i]->setStyleSheet("QPushButton { background-color: red;border: 1px solid black; }");
                else
                    pBtnGroup[i]->setStyleSheet("QPushButton { background-color: transparent;border: 1px solid black; }");
            }
            for(int i=0;i<arrnum;++i){
                disconnect(pBtnGroup[i],0,0,0);
                connect(pBtnGroup[i],&QPushButton::clicked,ui->line,[=](){
                    changetask* w_crtn=new changetask(arrangements[i]->name,arrangements[i]->dt);
                    connect(w_crtn,SIGNAL(senddatetime(QDateTime)),this,SLOT(getdatetime(QDateTime)));
                    connect(w_crtn,SIGNAL(sendqstring(QString)),this,SLOT(getqstring(QString)));
                    connect(w_crtn,SIGNAL(sendbool(bool)),this,SLOT(getdeld(bool)));
                    w_crtn->setFont(globalfont);
                    int w_return=w_crtn->exec();
                    if(w_return==QDialog::Accepted)
                    {
                        arrangements[i]->dt=ndatetime;
                        arrangements[i]->name=nddlname;
                        sortArrange();
                        writeQArrange();
                        for(int j=0;j<arrnum;++j){
                            if(QDateTime::currentDateTime().secsTo(arrangements[j]->dt)/86400<0)
                                pBtnGroup[j]->setStyleSheet("QPushButton { background-color: yellow;border: 1px solid black; }");
                            else if(QDateTime::currentDateTime().secsTo(arrangements[j]->dt)/86400<5)
                                pBtnGroup[j]->setStyleSheet("QPushButton { background-color: red;border: 1px solid black; }");
                            else
                                pBtnGroup[j]->setStyleSheet("QPushButton { background-color: transparent;border: 1px solid black; }");
                        }
                        w_crtn->close();
                    }
                    else if(w_return==QDialog::Rejected)
                    {
                        //不储存相应记忆
                        w_crtn->close();
                    }
                    if(delddl){
                        delddl2[i]=delddl;
                        delddl=false;
                    }
                    timer2 =  new QTimer(this);    //定时器
                    connect(timer2,&QTimer::timeout,this,&MainWindow::check_del);//信号槽 定时器时间到 启动 showtime
                    timer2->start(1000);//间隔1000ms(1s)
                    delete w_crtn;
                });
            }
            w_crt->close();
        }
        else if(w_return==QDialog::Rejected)
        {
            //不储存相应记忆
            w_crt->close();
        }
        delete w_crt;
    });
    //按钮修改
    for(int i=0;i<arrnum;++i){
        connect(pBtnGroup[i],&QPushButton::clicked,ui->line,[=](){
            changetask* w_crt=new changetask(arrangements[i]->name,arrangements[i]->dt);
            connect(w_crt,SIGNAL(senddatetime(QDateTime)),this,SLOT(getdatetime(QDateTime)));
            connect(w_crt,SIGNAL(sendqstring(QString)),this,SLOT(getqstring(QString)));
            connect(w_crt,SIGNAL(sendbool(bool)),this,SLOT(getdeld(bool)));
            w_crt->setFont(globalfont);
            int w_return=w_crt->exec();
            if(w_return==QDialog::Accepted)
            {
                arrangements[i]->dt=ndatetime;
                arrangements[i]->name=nddlname;
                sortArrange();
                writeQArrange();
                for(int i=0;i<arrnum;++i){
                    pBtnGroup[i]->setText(arrangements[i]->name);
                    if(QDateTime::currentDateTime().secsTo(arrangements[i]->dt)/86400<0)
                        pBtnGroup[i]->setStyleSheet("QPushButton { background-color: yellow;border: 1px solid black; }");
                    else if(QDateTime::currentDateTime().secsTo(arrangements[i]->dt)/86400<5)
                        pBtnGroup[i]->setStyleSheet("QPushButton { background-color: red;border: 1px solid black; }");
                    else
                        pBtnGroup[i]->setStyleSheet("QPushButton { background-color: transparent;border: 1px solid black; }");
                }
                w_crt->close();
            }
            else if(w_return==QDialog::Rejected)
            {
                //不储存相应记忆
                w_crt->close();
            }
            if(delddl){
                delddl2[i]=delddl;
                delddl=false;
            }
            delete w_crt;
            timer2 =  new QTimer(this);    //定时器
            connect(timer2,&QTimer::timeout,this,&MainWindow::check_del);//信号槽 定时器时间到 启动 showtime
            timer2->start(1000);//间隔1000ms(1s)
        });

    }

    /*timemaps*/
    //新增
    connect(ui->newtmap,&QPushButton::clicked,ui->line,[=](){
        tmap_create* w_crt=new tmap_create;
        connect(w_crt,SIGNAL(senddatetimes(QDateTime)),this,SLOT(getdtst(QDateTime)));
        connect(w_crt,SIGNAL(senddatetimee(QDateTime)),this,SLOT(getdted(QDateTime)));
        connect(w_crt,SIGNAL(sendqstringlist(QStringList)),this,SLOT(getdes(QStringList)));
        connect(w_crt,SIGNAL(sendbool(bool)),this,SLOT(getbool2(bool)));
        int w_return=w_crt->exec();
        if(w_return==QDialog::Accepted)
        {
            //储存相应记忆
            tmap[timnum]=new timemap(nlists,stdatetime,eddatetime,loo);
            timnum++;
            writeQMap();
            setmap();
            w_crt->close();
        }
        else if(w_return==QDialog::Rejected)
        {
            //不储存相应记忆
            w_crt->close();
        }
        delete w_crt;
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_start_clicked()
{
    int caseno=0;
    tomo *w_to=new tomo();
    for(;caseno<timnum;++caseno){
        if(tmap[caseno]->ed>QDateTime::currentDateTime()&&tmap[caseno]->st.secsTo(QDateTime::currentDateTime())/3600<=1&&tmap[caseno]->st.secsTo(QDateTime::currentDateTime())/3600>=-1)
            break;
    }
    if(caseno!=timnum){
        w_to=new tomo(tmap[caseno]->name,QDateTime::currentDateTime().secsTo(tmap[caseno]->ed)/60);
    }
    connect(w_to,SIGNAL(sendqstring(QString)),this,SLOT(getqstring(QString)));
    int w_return=w_to->exec();
    int time=-1;
    if(w_return==QDialog::Accepted)
    {
        time=nddlname.toInt();
        w_to->close();
    }
    else if(w_return==QDialog::Rejected)
    {
        //不储存相应记忆
        w_to->close();
    }
    delete w_to;
    if(time!=-1){
        fl_w_dc=true;
        ui->stackedWidget->setCurrentIndex(2);
        if(w_dc!=NULL)
            delete w_dc;
        w_dc=new DigitalClock(time,ui->page2);
        ui->lcdNumber->hide();
        connect(w_dc,SIGNAL(sendbool(bool)),this,SLOT(getbool(bool)));
        w_dc->show();
        player->play();
        player->setLoops(-1);
    }
}

void MainWindow::on_pg2_breakbutton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    delete w_dc;
    w_dc=NULL;
    player->stop();
}

void MainWindow::on_pg3_exitbutton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_diary_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_exitbutton_pressed()
{
    close();
}

void MainWindow::getfont(QFont ngfont){
    globalfont = ngfont;
    this->setFont(globalfont);
    push_buttons();
    for (QPushButton *btn : this->buttons) {
        btn->setFont(globalfont);
    }
    ui->tableWidget->setFont(globalfont);
}

void MainWindow::getheader(QStringList qsl){
    globalheader = qsl.at(0);
    QPixmap pixmap(globalheader);
    pixmap=pixmap.scaled(90,90);
    this->ui->labelheader->setPixmap(pixmap);
    FILE *file = fopen(globalpath.toStdString().c_str(), "w");
    if(file==NULL){
        qDebug()<<"文件打开失败";
    }
    fprintf(file,"%s\n",globalheader.toStdString().c_str());
    fprintf(file,"%s\n",QString("%1").arg(weekpass).toStdString().c_str());
    fclose(file);
}

void MainWindow::getdatetime(QDateTime ndt){
    ndatetime = ndt;
}

void MainWindow::getqstring(QString nstr){
    nddlname = nstr;
}
void MainWindow::getdtst(QDateTime ndt){
    stdatetime = ndt;
}
void MainWindow::getdted(QDateTime ndt){
    eddatetime = ndt;
}
void MainWindow::getdes(QStringList qsl){
    nlists=qsl;
}
void MainWindow::getbool(bool ndt){
    clo = ndt;
}
void MainWindow::getbool2(bool ndt){
    loo = ndt;
}
void MainWindow::getdelt(bool ndt){
    deltmap = ndt;
}
void MainWindow::getdeld(bool ndt){
    delddl = ndt;
}
void MainWindow::check_del(){
    delete timer2;
    for(int i=0;i<arrnum;++i){
        if(delddl2[i]){
            delddl2[i]=false;
            arrnum--;
            if(arrnum!=i){
                arrangements[i]->dt=arrangements[arrnum]->dt;
                arrangements[i]->name=arrangements[arrnum]->name;
            }
            sortArrange();
            writeQArrange();
            while (layoutbox->count()!=1) {
                QLayoutItem *item = layoutbox->takeAt(1);
                if (item->layout()) {
                    delete item->layout();
                } else if (item->widget()) {
                    delete item->widget();
                }
                delete item;
            }
            for(int j = 0 ; j < arrnum; j++){
                QPushButton *btn = new QPushButton();   //创建需要的按钮
                layoutbox->addWidget(btn);              //布局管理器内添加按钮控件
                btn->resize(135,60);                    //设置按钮大小
                btn->setMinimumSize(135,60);
                btn->setMaximumSize(135,60);
                buttons.insert(btn);
                btn ->setText(arrangements[j]->name);
                if(QDateTime::currentDateTime().secsTo(arrangements[j]->dt)/86400<0)
                    btn->setStyleSheet("QPushButton { background-color: yellow;border: 1px solid black; }");
                else if(QDateTime::currentDateTime().secsTo(arrangements[j]->dt)/86400<5)
                    btn->setStyleSheet("QPushButton { background-color: red;border: 1px solid black; }");
                else
                    btn->setStyleSheet("QPushButton { background-color: transparent;border: 1px solid black; }");
                pBtnGroup[j]=btn;
            }
            for(int k=0;k<arrnum;++k){
                disconnect(pBtnGroup[k],0,0,0);
                connect(pBtnGroup[k],&QPushButton::clicked,ui->line,[=](){
                    changetask* w_crtn=new changetask(arrangements[k]->name,arrangements[k]->dt);
                    connect(w_crtn,SIGNAL(senddatetime(QDateTime)),this,SLOT(getdatetime(QDateTime)));
                    connect(w_crtn,SIGNAL(sendqstring(QString)),this,SLOT(getqstring(QString)));
                    connect(w_crtn,SIGNAL(sendbool(bool)),this,SLOT(getdeld(bool)));
                    w_crtn->setFont(globalfont);
                    int w_return=w_crtn->exec();
                    if(w_return==QDialog::Accepted)
                    {
                        arrangements[k]->dt=ndatetime;
                        arrangements[k]->name=nddlname;
                        sortArrange();
                        writeQArrange();
                        for(int j=0;j<arrnum;++j){
                            if(QDateTime::currentDateTime().secsTo(arrangements[j]->dt)/86400<0)
                                pBtnGroup[j]->setStyleSheet("QPushButton { background-color: yellow;border: 1px solid black; }");
                            else if(QDateTime::currentDateTime().secsTo(arrangements[j]->dt)/86400<5)
                                pBtnGroup[j]->setStyleSheet("QPushButton { background-color: red;border: 1px solid black; }");
                            else
                                pBtnGroup[j]->setStyleSheet("QPushButton { background-color: transparent;border: 1px solid black; }");
                        }
                        w_crtn->close();
                    }
                    else if(w_return==QDialog::Rejected)
                    {
                        //不储存相应记忆
                        w_crtn->close();
                    }
                    if(delddl){
                        delddl2[k]=delddl;
                        delddl=false;
                    }
                    delete w_crtn;
                    timer2 =  new QTimer(this);    //定时器
                    connect(timer2,&QTimer::timeout,this,&MainWindow::check_del);//信号槽 定时器时间到 启动 showtime
                    timer2->start(1000);//间隔1000ms(1s)
                });
            }
        }
    }
}
void MainWindow::stopclock(){
    if(fl_w_dc&&clo){
        on_pg2_breakbutton_clicked();
        fl_w_dc=false;
        clo=false;
    }
}

void MainWindow::push_buttons(){
    QObjectList children = this->findChildren<QObject*>();
    // QObjectList children = this->findChildren<QPushButton*>(Qt::FindChildrenRecursively);
    for (QObject *child : children) {
        QPushButton *btn = qobject_cast<QPushButton*>(child);
        if (btn) {
            buttons.insert(btn);
        }
    }
}

void MainWindow::on_supply_clicked()
{
    supply_window *s = new supply_window(this);
    s->show();
}

void MainWindow::readQArrange()
{
    //指定文件的路径
    FILE *file = fopen("D:/Programs/FOUNDATION/Code/QT/timecontroller/user_data/user001/arrange.txt", "r");
    if(file==NULL){
        qDebug()<<"文件打开失败";
    }
    char StrLine[1024];
    fgets(StrLine,1024,file);
    arrnum=(int)atof(StrLine);
    int i=0;
    while(i<arrnum){
        QString nametmp;
        //从文件中读取一个字符串
        QString datetimestringtmp;
        QDateTime datetimetmp;
        fgets(StrLine,1024,file);
        nametmp = QString::fromUtf8(StrLine);
        nametmp=nametmp.remove(nametmp.length()-1,1);
        fgets(StrLine,1024,file);
        datetimestringtmp = QString::fromUtf8(StrLine);
        datetimestringtmp = datetimestringtmp.remove(datetimestringtmp.length()-1,1);
        datetimetmp=QDateTime::fromString(datetimestringtmp, "yyyy-MM-dd hh:mm:ss");
        arrangements[i++]=new arrange(nametmp,datetimetmp);
    }
    fclose(file);
}

void MainWindow::writeQArrange(){
    FILE *file = fopen("D:/Programs/FOUNDATION/Code/QT/timecontroller/user_data/user001/arrange.txt", "w");
    if(file==NULL){
        qDebug()<<"文件打开失败";
    }
    fprintf(file,"%d\n",arrnum);
    int i=0;
    while(i<arrnum){
        fprintf(file,"%s\n",arrangements[i]->name.toStdString().c_str());
        fprintf(file,"%s\n",arrangements[i]->dt.toString("yyyy-MM-dd hh:mm:ss").toStdString().c_str());
        ++i;
    }
    fclose(file);
}

void MainWindow::sortArrange(){
    std::vector<arrange*>vrange(arrangements,arrangements+arrnum);
    std::sort(vrange.begin(),vrange.end(),cmparrange());
    int i=0;
    for(std::vector<arrange*>::iterator itr=vrange.begin();itr!=vrange.end();++i,itr++){
        arrangements[i]=*itr;
    }
}

void MainWindow::readQMap()
{
    //指定文件的路径
    FILE *file = fopen("D:/Programs/FOUNDATION/Code/QT/timecontroller/user_data/user001/map.txt","r");
    if(file==NULL){
        qDebug()<<"文件打开失败";
    }
    char StrLine[1024];
    fgets(StrLine,1024,file);
    timnum=(int)atof(StrLine);
    int i=0;
    while(i<timnum){
        QStringList qsl;
        QString tmp;
        QString datetimestringtmp;
        QDateTime datetime1,datetime2;
        bool loops;
        for(int i=0;i<3;++i){
            fgets(StrLine,1024,file);
            tmp = QString::fromUtf8(StrLine);
            tmp=tmp.remove(tmp.length()-1,1);
            qsl.append(tmp);
        }
        fgets(StrLine,1024,file);
        datetimestringtmp = QString::fromUtf8(StrLine);
        datetimestringtmp = datetimestringtmp.remove(datetimestringtmp.length()-1,1);
        datetime1=QDateTime::fromString(datetimestringtmp, "yyyy-MM-dd hh:mm:ss");
        fgets(StrLine,1024,file);
        datetimestringtmp = QString::fromUtf8(StrLine);
        datetimestringtmp = datetimestringtmp.remove(datetimestringtmp.length()-1,1);
        datetime2=QDateTime::fromString(datetimestringtmp, "yyyy-MM-dd hh:mm:ss");
        fgets(StrLine,1024,file);
        loops = QString::fromUtf8(StrLine).toInt();
        tmap[i++]=new timemap(qsl,datetime1,datetime2,loops);
        //qDebug() << i << nametmp << datetimestringtmp;
    }
    fclose(file);
}

void MainWindow::writeQMap(){
    FILE *file = fopen("D:/Programs/FOUNDATION/Code/QT/timecontroller/user_data/user001/map.txt", "w");
    if(file==NULL){
        qDebug()<<"文件打开失败";
    }
    fprintf(file,"%d\n",timnum);
    int i=0;
    while(i<timnum){
        fprintf(file,"%s\n",tmap[i]->name.toStdString().c_str());
        fprintf(file,"%s\n",tmap[i]->color.toStdString().c_str());
        fprintf(file,"%s\n",tmap[i]->description.toStdString().c_str());
        fprintf(file,"%s\n",tmap[i]->st.toString("yyyy-MM-dd hh:mm:ss").toStdString().c_str());
        fprintf(file,"%s\n",tmap[i]->ed.toString("yyyy-MM-dd hh:mm:ss").toStdString().c_str());
        if(tmap[i]->loop){
            fprintf(file,"1\n");
        }
        else{
            fprintf(file,"0\n");
        }
        ++i;
    }
    fclose(file);
}

void MainWindow::setItem(int row, int column, QString name,QString color="") {
    QTableWidgetItem *item = ui->tableWidget->item(row, column);
    if (!item) {
        item = new QTableWidgetItem();
        ui->tableWidget->setItem(row, column, item);
    }
    item->setText(name);
    if(color!=""){
        QColor colors;
        item->setBackground(QBrush(colors));
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    --weekpass;
    FILE *file = fopen(globalpath.toStdString().c_str(), "w");
    if(file==NULL){
        qDebug()<<"文件打开失败";
    }
    fprintf(file,"%s\n",globalheader.toStdString().c_str());
    fprintf(file,"%s\n",QString("%1").arg(weekpass).toStdString().c_str());
    fclose(file);
    ui->lineEdit->setText(QString("%1").arg(weekpass));
    setmap();
}


void MainWindow::on_pushButton_3_clicked()
{
    ++weekpass;
    FILE *file = fopen(globalpath.toStdString().c_str(), "w");
    if(file==NULL){
        qDebug()<<"文件打开失败";
    }
    fprintf(file,"%s\n",globalheader.toStdString().c_str());
    fprintf(file,"%s\n",QString("%1").arg(weekpass).toStdString().c_str());
    fclose(file);
    ui->lineEdit->setText(QString("%1").arg(weekpass));
    setmap();
}

void MainWindow::show_prodcut_sets(int row,int col)
{
    if(root[row][col]!=-1){
        int i=root[row][col];
        tmap_change* w_crt=new tmap_change(tmap[i]->st,tmap[i]->ed,tmap[i]->name,tmap[i]->color,tmap[i]->description);
        connect(w_crt,SIGNAL(senddatetimes(QDateTime)),this,SLOT(getdtst(QDateTime)));
        connect(w_crt,SIGNAL(senddatetimee(QDateTime)),this,SLOT(getdted(QDateTime)));
        connect(w_crt,SIGNAL(sendqstringlist(QStringList)),this,SLOT(getdes(QStringList)));
        connect(w_crt,SIGNAL(sendbool(bool)),this,SLOT(getdelt(bool)));
        int w_return=w_crt->exec();
        if(w_return==QDialog::Accepted)
        {
            //储存相应记忆
            tmap[i]=new timemap(nlists,stdatetime,eddatetime,tmap[i]->loop);
            writeQMap();
            setmap();
            w_crt->close();
        }
        else if(w_return==QDialog::Rejected)
        {
            //不储存相应记忆
            w_crt->close();
        }
        if(deltmap){
            deltmap=false;
            timnum--;
            if(i!=timnum){
                tmap[i]=tmap[timnum];
            }
            writeQMap();
            setmap();
        }
        delete w_crt;
    }
}

void MainWindow::setmap(){
    for(int i=0;i<7;++i){
        for(int j=1;j<=10;++j){
            setItem(j,i,"");
            root[j][i]=-1;
        }
    }
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(0);
    QDateTime mon=stdate.addDays(7*weekpass);
    QStringList verHeader;	//行表头
    verHeader <<"日期"<< "7:00~8:00" << "8:00~10:00" << "10:00~12:00" << "12:00~13:00" << "13:00~15:00" << "15:00~17:00" << "17:00~1:00" << "19:00~21:00" << "21:00~23:00" << "23:00~1:00";
    ui->tableWidget->setRowCount(verHeader.size());
    ui->tableWidget->setVerticalHeaderLabels(verHeader);
    QStringList horHeader;	//行表头
    horHeader << "Monday" << "Tuesday" << "Wednesday" << "Thursday" << "Friday" << "Saturday"<< "Sunday";
    ui->tableWidget->setColumnCount(horHeader.size());
    ui->tableWidget->setHorizontalHeaderLabels(horHeader);
    for(int i=0;i<7;++i){
        setItem(0,i,mon.addDays(i).date().toString("yyyy-MM-dd"));
    }
    // 返回鼠标单击的所在单元格的row和col
    connect(ui->tableWidget,SIGNAL(cellClicked(int,int)),this,SLOT(show_prodcut_sets(int,int)),Qt::UniqueConnection);
    for(int i=0;i<timnum;++i){
        if(!tmap[i]->loop&&tmap[i]->st>mon&&tmap[i]->ed<mon.addDays(7)){
            int day=0,timee=0;
            for(;day<7;++day){
                if(tmap[i]->st.date()==mon.addDays(day).date())
                    break;
            }
            int times=0;
            if(tmap[i]->st.time().hour()<8)
                times=0;
            switch(tmap[i]->st.time().hour())
            {
            case 8:times=1;break;
            case 9:times=1;break;
            case 10:times=2;break;
            case 11:times=2;break;
            case 12:times=3;break;
            case 13:times=4;break;
            case 14:times=4;break;
            case 15:times=5;break;
            case 16:times=5;break;
            case 17:times=6;break;
            case 18:times=6;break;
            case 19:times=7;break;
            case 20:times=7;break;
            case 21:times=8;break;
            case 22:times=8;break;
            case 23:times=9;break;
            case 0:times=9;break;
            case 1:times=9;break;
            }
            if(tmap[i]->ed.time().hour()>1)
                timee=0;
            switch(tmap[i]->ed.time().hour())
            {
            case 9:timee=1;break;
            case 10:timee=1;break;
            case 11:timee=2;break;
            case 12:timee=2;break;
            case 13:timee=3;break;
            case 14:timee=4;break;
            case 15:timee=4;break;
            case 16:timee=5;break;
            case 17:timee=5;break;
            case 18:timee=6;break;
            case 19:timee=6;break;
            case 20:timee=7;break;
            case 21:timee=7;break;
            case 22:timee=8;break;
            case 23:timee=8;break;
            case 0:timee=9;break;
            case 1:timee=9;break;
            }
            setItem(times+1,day,tmap[i]->name);
            if(times<timee)
                ui->tableWidget->setSpan(times+1, day, timee-times+1, 1);
            root[times+1][day]=i;
        }
        else if(tmap[i]->loop){
            int day=0,timee=0;
            day=tmap[i]->st.date().dayOfWeek()-1;
            if(day==-1)day=6;
            int times=0;
            if(tmap[i]->st.time().hour()<8)
                times=0;
            switch(tmap[i]->st.time().hour())
            {
            case 8:times=1;break;
            case 9:times=1;break;
            case 10:times=2;break;
            case 11:times=2;break;
            case 12:times=3;break;
            case 13:times=4;break;
            case 14:times=4;break;
            case 15:times=5;break;
            case 16:times=5;break;
            case 17:times=6;break;
            case 18:times=6;break;
            case 19:times=7;break;
            case 20:times=7;break;
            case 21:times=8;break;
            case 22:times=8;break;
            case 23:times=9;break;
            case 0:times=9;break;
            case 1:times=9;break;
            }
            if(tmap[i]->ed.time().hour()>1)
                timee=0;
            switch(tmap[i]->ed.time().hour())
            {
            case 9:timee=1;break;
            case 10:timee=1;break;
            case 11:timee=2;break;
            case 12:timee=2;break;
            case 13:timee=3;break;
            case 14:timee=4;break;
            case 15:timee=4;break;
            case 16:timee=5;break;
            case 17:timee=5;break;
            case 18:timee=6;break;
            case 19:timee=6;break;
            case 20:timee=7;break;
            case 21:timee=7;break;
            case 22:timee=8;break;
            case 23:timee=8;break;
            case 0:timee=9;break;
            case 1:timee=9;break;
            }
            setItem(times+1,day,tmap[i]->name);
            if(times<timee)
                ui->tableWidget->setSpan(times+1, day, timee-times+1, 1);
            root[times+1][day]=i;
        }
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    if(fl_music){
        fl_music=false;
        player->stop();
    }
    else{
        fl_music=true;
        player->play();
        player->setLoops(-1);
    }
}

