#ifndef TMAP_CHANGE_H
#define TMAP_CHANGE_H

#include <QDialog>
#include <QString>
#include <QDateTime>

namespace Ui {
class tmap_change;
}

class tmap_change : public QDialog
{
    Q_OBJECT

public:
    explicit tmap_change(QDateTime st,QDateTime ed,QString name,QString color,QString des,QWidget *parent = nullptr);
    ~tmap_change();

signals:
    void sendqstringlist(QStringList);
    void senddatetimes(QDateTime);
    void senddatetimee(QDateTime);
    void sendbool(bool);

private slots:
    void on_buttonBox_accepted();

    void on_deltmap_clicked();

private:
    Ui::tmap_change *ui;
};

#endif // TMAP_CHANGE_H
