#ifndef CART_H
#define CART_H
#include <QDialog>
#include <QWidget>
#include <QTableWidgetItem>
#include "carttable.h"
namespace Ui {
class Cart;
}

class Cart : public QDialog
{
    Q_OBJECT

public:
    explicit Cart(QWidget *parent = 0);
    ~Cart();
    Ui::Cart* getUi() const {return ui;};

public slots:
    void Checkout();
    //void buildTable();
private:
    Ui::Cart *ui;

    //QWidget *Parent= NULL;
};

#endif // CART_H
