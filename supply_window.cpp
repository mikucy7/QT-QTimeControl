#include "supply_window.h"
#include "ui_supply_window.h"
#include<QMenu>
#include<QSignalMapper>
#include<QObject>
#include<QFile>
#include <QtCore/qglobal.h>
#include <cstdlib>
#include "search.h"
#include "ui_search.h"
supply_window::supply_window(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::supply_window)
{
    ui->setupUi(this);

    QMenu *menu = new QMenu(ui->where_);

    // 创建QAction并添加到菜单中
    where[0] = new QAction("家园二层", this);where[1] = new QAction("家园三层", this);
    where[2] = new QAction("家园一层", this);where[3] = new QAction("农园食堂", this);
    where[4] = new QAction("勺园食堂", this);where[5] = new QAction("学五食堂", this);
    where[6] = new QAction("学一食堂", this);
    for(int i=0;i<7;i++)
        menu->addAction(where[i]);
    //action放入菜单
    ui->where_->setMenu(menu);// 将菜单设置给QToolButton
    // 设置QToolButton的弹出模式，以下为点击小三角菜单弹出
    ui->where_->setPopupMode(QToolButton::MenuButtonPopup);
    // 创建信号映射
    // 连接QAction的triggered信号到信号映射
    for(int i=0;i<7;i++)
        connect(where[i], &QAction::triggered, this, &supply_window::on_where_Triggered);
    //以上where选择完成

    QMenu *menu2 = new QMenu(ui->price_);
    price_[0] = new QAction("10r以内",this);price_[1] = new QAction("10r-15r",this);
    price_[2] = new QAction("15r-20r",this);price_[3] = new QAction("20-25r",this);
    price_[4] = new QAction("25r-30r",this);price_[5] = new QAction("30r以上",this);
    for(int i=0;i<6;i++)
        menu2->addAction(price_[i]);
    ui->price_->setMenu(menu2);
    ui->price_->setPopupMode(QToolButton::MenuButtonPopup);
    for(int i=0;i<6;i++)
        connect(price_[i], &QAction::triggered, this, &supply_window::on_price_Triggered);
}
void supply_window::on_where_Triggered()
{
    QAction *action = qobject_cast<QAction*>(sender()); // 获取发送信号的 QAction 对象
    if (action) {
        int index=-1;
        for(int i=0;i<7;i++){
            if(where[i]==action){
                index=i;
                break;
            }
        }
        if(index!=-1){
            for(int i=0;i<7;i++)
                w_[i]=0;
            w_[index]=1;
        }
        ui->where_->setText(action->text()); // 设置按钮文字为当前点击 Action 的文字
    }
}
void supply_window::on_price_Triggered(){
    QAction *action = qobject_cast<QAction*>(sender());
    if (action) {
        int index=-1;
        for(int i=0;i<6;i++){
            if(price_[i]==action){
                index=i;
                break;
            }
        }
        if(index!=-1){
            for(int i=0;i<6;i++)
                p_[i]=0;
            p_[index]=1;
        }
        ui->price_->setText(action->text());
    }
}


supply_window::~supply_window()
{
    delete ui;
}



void supply_window::on_Find__clicked()
{
    int position=0;int s=0,e=0;
    int MinP;int MaxP;
    for(int i=0;i<7;i++){
        if(w_[i]){
            position=i+1;
            break;
        }
    }
    switch(position){
    case 1:s=0;e=8;break;
    case 2:s=9;e=22;break;
    case 3:s=23;e=26;break;
    case 4:s=27;e=30;break;
    case 5:s=31;e=34;break;
    case 6:s=35;e=40;break;
    case 7:s=41;e=50;break;
    case 8:s=51;e=56;break;
    }

    for(int i=0;i<6;i++){
        if(p_[i]){
            switch(i){
            case 0:MinP=0;MaxP=10;break;
            case 1:MinP=10;MaxP=15;break;
            case 2:MinP=15;MaxP=20;break;
            case 3:MinP=20;MaxP=25;break;
            case 4:MinP=25;MaxP=30;break;
            case 5:MinP=30;MaxP=1500;break;
            }
            break;
        }
    }
    QString absolutePath = "D:/Programs/FOUNDATION/Code/QT/timecontroller/csv.csv";
    QFile file(absolutePath);
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << "无法打开文件";
    }//完全不知道为什么，删了这两行lines长度会变成0
    QTextStream in(&file);
    QList<QString> lines;
    QList<QString> M;

    while (!in.atEnd()) {
        lines.append(in.readLine());
    }
    file.close();
    int l=e-s+1;
    bool ok;bool a[15]={0};
    int now=0;
    for(int i=0;i<5;i++){
        ok=0;
        now=0;
        for(int i=0;i<l;i++)
            a[i]=0;
        for(int j=0;j<3;j++){
            int r=rand()%l;
            if(a[r]==0){
                QString line = lines[s+r];
                QStringList fields = line.split(",");
                QString Str = fields[2];
                int f = Str.toInt();
                if(f==1000&&j==1){
                    a[r]=1;now=1000;ok=1;break;
                }
                if(now+f<=MaxP){
                    a[r]=1;now+=f;
                }
            }
            if(now<=MaxP&&now>=MinP){
                ok=1;break;
            }
        }
        if(ok)
            break;
    }
    if(ok&&now!=0){
        for(int i=0;i<l;i++){
            if(a[i]){
                QString line = lines[s+i];
                QStringList fields = line.split(",");
                M.append(fields[1]);}
        }
        if(now!=1000){
            QString temp = QString::number(now);
            QString a="total cost : "+temp;
            M.append(a);
        }
        else{
            QString a="total cost : ?";
            M.append(a);
        }
        search *p = new search(this);
        QLabel *resultLabel = p->findChild<QLabel *>("resultLabel");
        if (resultLabel) {
            resultLabel->setText(M.join("\n"));
        }
        p->show();
    }
    else{
        search *p = new search(this);
        QLabel *resultLabel = p->findChild<QLabel *>("resultLabel");
        if (resultLabel) {
            resultLabel->setText("I HAVE NO IDEA");
        }
        p->show();
    }

}


