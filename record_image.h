#ifndef RECORD_IMAGE_H
#define RECORD_IMAGE_H

#include <QDialog>
#include <QLabel>

namespace Ui {
class record_image;
}

class record_image : public QDialog
{
    Q_OBJECT

public:
    explicit record_image(QWidget *parent = nullptr,int n=0);
    ~record_image();
    int num;

private slots:
    void on_pushButton_clicked();

private:
    Ui::record_image *ui;
};

#endif // RECORD_IMAGE_H
