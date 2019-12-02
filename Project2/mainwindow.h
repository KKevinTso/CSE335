#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "cart.h"
#include <QMainWindow>
#include <QTableWidgetItem>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void ShowCart();
    QList<QTableWidgetItem*> addToCart();
private slots:
    void Lockup(bool);
private:
    Ui::MainWindow *ui;
    Cart* mCart = NULL;
};

#endif // MAINWINDOW_H
