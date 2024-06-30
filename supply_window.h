#ifndef SUPPLY_WINDOW_H
#define SUPPLY_WINDOW_H

#include <QDialog>

namespace Ui {
class supply_window;
}

class supply_window : public QDialog
{
    Q_OBJECT

public:
    explicit supply_window(QWidget *parent = nullptr);
    ~supply_window();
    void on_where_Triggered();
    void on_price_Triggered();
    QAction *where[7];
    QAction *price_[6];
    bool w_[7];
    bool p_[6];

private slots:
    void on_Find__clicked();

private:
    Ui::supply_window *ui;
};

#endif // SUPPLY_WINDOW_H
