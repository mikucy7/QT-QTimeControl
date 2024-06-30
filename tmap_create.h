#ifndef TMAP_CREATE_H
#define TMAP_CREATE_H

#include <QDialog>
#include <QString>
#include <QDateTime>

namespace Ui {
class tmap_create;
}

class tmap_create : public QDialog
{
    Q_OBJECT

public:
    explicit tmap_create(QWidget *parent = nullptr);
    ~tmap_create();

signals:
    void sendqstringlist(QStringList);
    void senddatetimes(QDateTime);
    void senddatetimee(QDateTime);
    void sendbool(bool);

private slots:
    void on_buttonBox_accepted();

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::tmap_create *ui;
};

#endif // TMAP_CREATE_H
