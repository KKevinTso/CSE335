/*
 * Written referencing examples 3 and 4 of sample code
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <vector>
#include "observerdialog.h"

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
    void resetClicked();

private slots:
    void on_CreateButton_clicked();

    void on_DeleteButton_clicked();

private:
    Ui::MainWindow *ui;
    std::vector<ObserverDialog*> listeners;
};

#endif // MAINWINDOW_H
