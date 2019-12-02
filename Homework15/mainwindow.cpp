#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "textlabel.h"
#include <QtGui>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //connect line edit to label, combo box, and slider
    connect(ui->lineEditSize,SIGNAL(textChanged(QString)),ui->labelFox,SLOT(setSizeByText(QString)));
    connect(ui->lineEditSize,SIGNAL(textChanged(QString)),ui->comboBoxSize,SLOT(setCurrentText(QString)));
    connect(ui->lineEditSize,SIGNAL(textChanged(QString)),ui->sliderEditSize,SLOT(setSliderPosition(QString)));

    //connect combo box to label and line edit
    connect(ui->comboBoxSize,SIGNAL(currentIndexChanged(QString)),ui->labelFox,SLOT(setSize(QString)));
    connect(ui->comboBoxSize,SIGNAL(currentIndexChanged(QString)),ui->lineEditSize,SLOT(showSize(QString)));
    //connect(ui->comboBoxSize,SIGNAL(currentIndexChanged(QString)),ui->sliderEditSize,SLOT(setSliderPosition(QString)));

    //connect radio buttons to label
    connect(ui->radioButtonArial,SIGNAL(toggled(bool)),ui->labelFox,SLOT(modifyFontByRadioButtonArial(bool)));
    connect(ui->radioButtonTimes,SIGNAL(toggled(bool)),ui->labelFox,SLOT(modifyFontByRadioButtonTimes(bool)));
    connect(ui->radioButtonComic,SIGNAL(toggled(bool)),ui->labelFox,SLOT(modifyFontByRadioButtonComic(bool)));

    //connect slider to label
    connect(ui->sliderEditSize,SIGNAL(valueChanged(int)),ui->labelFox,SLOT(modifyFontBySliderSize(int)));
}

void MainWindow::getFont(QFont qf){
    ui->labelFox->setFont(qf);
    //QMessageBox::about(this, "test", qf.toString());
}

MainWindow::~MainWindow()
{
    delete ui;
}
