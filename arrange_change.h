#ifndef ARRANGE_CHANGE_H
#define ARRANGE_CHANGE_H

#include <QDialog>
#include <QDateTime>
#include <QString>

namespace Ui {
class changetask;
}

class changetask : public QDialog
{
    Q_OBJECT

public:
    explicit changetask(QString name, QDateTime datetime, QWidget *parent = nullptr);
    void settime();
    ~changetask();

signals:
    void senddatetime(QDateTime);
    void sendqstring(QString);
    void sendbool(bool);

private slots:
    void on_dateTimeEdit_dateTimeChanged(const QDateTime &dateTime);

    void on_textEdit_textChanged();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::changetask *ui;
};

#endif // ARRANGE_CHANGE_H
