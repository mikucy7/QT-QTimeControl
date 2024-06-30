#ifndef COLLECT_H
#define COLLECT_H

#include <QDialog>

namespace Ui {
class Collect;
}

class Collect : public QDialog
{
    Q_OBJECT

public:
    explicit Collect(QWidget *parent = nullptr);
    bool* star;
    ~Collect();

private slots:

    void on_Collect_the_Star_clicked();

private:
    Ui::Collect *ui;
};

#endif // COLLECT_H
