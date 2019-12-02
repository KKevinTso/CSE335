/*
 * Written referencing examples 3 and 4 of sample code
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_observerdialog.h"
#include "observerdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->horizontalSlider->setMinimum(0);
    ui->horizontalSlider->setMaximum(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CreateButton_clicked()
{
    //create window
    ObserverDialog* newListener = new ObserverDialog(this);
    listeners.push_back(newListener);
    newListener->getUi()->sliderLbl->setNum(ui->horizontalSlider->value());
    newListener->show();

    //connect main slider to label on dialogue
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),newListener->getUi()->sliderLbl, SLOT(setNum(int)));

    //connect dialogue reset button function to this function
    connect(newListener, SIGNAL(resetClicked()), this, SLOT(resetClicked()));
}

void MainWindow::on_DeleteButton_clicked()
{
    //close and remove last window from vector
    if(listeners.size()>0){
        ObserverDialog* lastListener = listeners.back();
        lastListener->close();
        listeners.pop_back();
    }
}

void MainWindow::resetClicked(){
    //set slider to 0
    ui->horizontalSlider->setValue(0);
}
