#ifndef COLLECT_RECORD_H
#define COLLECT_RECORD_H

#include <QDialog>

namespace Ui {
class collect_record;
}

class collect_record : public QDialog
{
    Q_OBJECT

public:
    explicit collect_record(QWidget *parent = nullptr);
    ~collect_record();

private slots:
    void on_temp1_clicked();

    void on_temp2_clicked();

    void on_temp10_clicked();

    void on_temp11_clicked();

    void on_temp12_clicked();

    void on_temp13_clicked();

    void on_temp14_clicked();

    void on_temp15_clicked();

    void on_temp16_clicked();

    void on_temp3_clicked();

    void on_temp4_clicked();

    void on_temp5_clicked();

    void on_temp6_clicked();

    void on_temp7_clicked();

    void on_temp8_clicked();

    void on_temp9_clicked();

private:
    Ui::collect_record *ui;
};

#endif // COLLECT_RECORD_H
