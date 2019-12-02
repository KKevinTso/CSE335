#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include <QMessageBox>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //set slider min and max
    ui->sliderEditSize->setMinimum(0);
    ui->sliderEditSize->setMaximum(40);

    //connect line edit to label, combo box, and slider
    connect(ui->lineEditSize,SIGNAL(editingFinished()),ui->lineEditSize,SLOT(myEditingFinished()));
    connect(ui->lineEditSize,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

    //connect combo box to label and line edit
    connect(ui->comboBoxSize,SIGNAL(currentIndexChanged(QString)),ui->comboBoxSize,SLOT(myCurrentIndexChanged(QString)));
    connect(ui->comboBoxSize,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

    //connect radio buttons to label
    connect(ui->radioButtonArial,SIGNAL(toggled(bool)),ui->radioButtonArial,SLOT(myToggleChanged(bool)));
    connect(ui->radioButtonArial,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

    connect(ui->radioButtonTimes,SIGNAL(toggled(bool)),ui->radioButtonTimes,SLOT(myToggleChanged(bool)));
    connect(ui->radioButtonTimes,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

    connect(ui->radioButtonComic,SIGNAL(toggled(bool)),ui->radioButtonComic,SLOT(myToggleChanged(bool)));
    connect(ui->radioButtonComic,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

    //connect slider to label
    connect(ui->sliderEditSize,SIGNAL(valueChanged(int)),ui->sliderEditSize,SLOT(myPositionChanged(int)));
    connect(ui->sliderEditSize,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));
}

void MainWindow::actByYourChange(QObject* senderObj){
    QFont font = ui->labelFox->font();
    if(senderObj == ui->lineEditSize){
        //change combo box selection
        ui->comboBoxSize->setCurrentText(ui->lineEditSize->text());

        //change label size and slider value
        if (ui->lineEditSize->text() == "small"){
            font.setPointSize(10);
            ui->sliderEditSize->setValue(10);
        }
        else if (ui->lineEditSize->text() == "medium"){
            font.setPointSize(20);
            ui->sliderEditSize->setValue(20);
        }
        else if (ui->lineEditSize->text() == "big"){
            font.setPointSize(40);
            ui->sliderEditSize->setValue(40);
        }
    }
    else if (senderObj == ui->comboBoxSize){
        //change line edit text
        ui->lineEditSize->setText(ui->comboBoxSize->currentText());

        //change label size and slider value
        if (ui->comboBoxSize->currentText() == "small"){
            font.setPointSize(10);
            ui->sliderEditSize->setValue(10);
        }
        else if (ui->comboBoxSize->currentText() == "medium"){
            font.setPointSize(20);
            ui->sliderEditSize->setValue(20);
        }
        else if (ui->comboBoxSize->currentText() == "big"){
            font.setPointSize(40);
            ui->sliderEditSize->setValue(40);
        }
    }
    else if (senderObj == ui->radioButtonArial){
        //set font to Arial
        font.setFamily("Arial");
    }
    else if (senderObj == ui->radioButtonTimes){
        //set font to Times New Roman
        font.setFamily("Times New Roman");
    }
    else if (senderObj == ui->radioButtonComic){
        //set font to Comic Sans MS
        font.setFamily("Comic Sans MS");
    }
    else if (senderObj == ui->sliderEditSize){
        //set font size to slider value
        int size = ui->sliderEditSize->value();
        if(size == 0)
            font.setPointSize(12);
        else
            font.setPixelSize(size);
    }
    else{
        std::cout << "no matching object in mainwindow.cpp" << std::endl;
    }
    ui->labelFox->setFont(font);
}

MainWindow::~MainWindow()
{
    delete ui;
}
