/*
 * Written referencing examples 3 and 4 of sample code
 */

#include "observerdialog.h"
#include "ui_observerdialog.h"

ObserverDialog::ObserverDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ObserverDialog)
{
    ui->setupUi(this);
}

ObserverDialog::~ObserverDialog()
{
    delete ui;
}


void ObserverDialog::on_ResetButton_clicked()
{
    //call main window to reset slider
    emit resetClicked();
}
