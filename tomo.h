#ifndef TOMO_H
#define TOMO_H

#include <QDialog>
#include <QString>

namespace Ui {
class tomo;
}

class tomo : public QDialog
{
    Q_OBJECT

public:
    explicit tomo(QString name=QString("无相应事务"),int min=60,QWidget *parent = nullptr);
    ~tomo();

private slots:
    void on_buttonBox_accepted();

signals:
    void sendqstring(QString);

private:
    Ui::tomo *ui;
};

#endif // TOMO_H
