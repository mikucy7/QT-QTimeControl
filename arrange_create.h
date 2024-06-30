#ifndef ARRANGE_CREATE_H
#define ARRANGE_CREATE_H

#include <QDialog>
#include <QDateTime>
#include <QString>

namespace Ui {
class createtask;
}

class createtask : public QDialog
{
    Q_OBJECT

public:
    explicit createtask(QWidget *parent = nullptr);
    ~createtask();

signals:
    void senddatetime(QDateTime);

    void sendqstring(QString);

private slots:
    void on_dateTimeEdit_dateTimeChanged(const QDateTime &dateTime);

    void on_textEdit_textChanged();

    void on_buttonBox_accepted();

private:
    Ui::createtask *ui;
};

#endif // ARRANGE_CREATE_H
