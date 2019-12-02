#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QList>
#include <iostream>
#include "carttable.h"
#include "cart.h"
#include "ui_cart.h"
//#include "important.qrc"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    mCart = new Cart(this);
    ui->setupUi(this);
    connect(mCart->getUi()->CheckoutButton,SIGNAL(clicked(bool)),this,SLOT(Lockup(bool)));

    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(addToCart()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),mCart->getUi()->uiCartTable,SLOT(addToTable(bool)));
    ui->tableWidget->setColumnCount(4);
    //ui->tableWidget->setRowCount(5);
    ui->tableWidget->setColumnWidth(3,240);

    ui->tableWidget_2->setColumnWidth(0,340);

    ui->tableWidget->setRowCount(4);
    ui->tableWidget->horizontalHeader()->stretchLastSection();
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setShowGrid(false);
   // ui->tableWidget->horizontalHeader()->setResizeMode(QHeaderView::Stretch);

    connect(ui->showCartButton,SIGNAL(clicked(bool)),this,SLOT(ShowCart()));

    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setShowGrid(false);
    //ui->tableWidget->setMaximumHeight(20);

    ui->tableWidget_2->verticalHeader()->setVisible(false);
    ui->tableWidget_2->setShowGrid(false);

    connect(ui->pushButton,SIGNAL(clicked(bool)),ui->tableWidget,SLOT(addToTable(bool)));
    connect(ui->pushButton,SIGNAL(clicked(bool)),ui->tableWidget_2,SLOT(addToTable(bool)));
}
void MainWindow :: ShowCart(){
    // MIGHT NEED TO MOVE THE CREATION OF THE CART TO MAINWINDOW SO YOU CAN ADD ITEMS TO IT WITHOUT IT BEING VISABLE

    //mCart->setModal(true);


    mCart->show();

}
// locks the buttons in mainwindow when checkout is pressed in the dialog
void MainWindow::Lockup(bool){
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->showCartButton->setEnabled(false );
};
// send this list to cart so it can add the items selected
QList<QTableWidgetItem*> MainWindow :: addToCart(){
    QList<QTableWidgetItem*> out;
    QList<int> visitedRows;
    bool visited = false;
    int temprow;
    QTableWidgetItem temp;
    //cout<<"--------------------------------------"<<endl;
    for( int i =0;  i<ui->tableWidget->selectedItems().size();i++){
        visited = false;
        temprow = ui->tableWidget->selectedItems()[i]->row();

        for(int j=0; j< visitedRows.size();j++){
            //cout<<"temprow: "<< temprow<< " visitedRows: "<< visitedRows[j]<< endl;
            if(temprow == visitedRows[j]){
                //cout<< "denied entry to :"<< temprow<< " visitedRows: "<< visitedRows[j]<< endl;
                visited = true;
            }
        }

        //cout<< temprow<< endl;
        if(visited == false){
            //cout<<"added row: "<<temprow<<endl;
            visitedRows.push_back(temprow);
            out.push_back(ui->tableWidget->item(temprow,0));
            out.push_back(ui->tableWidget->item(temprow,2));
        }


    }
    // still need to add the items to the list and to append them to the list addjust mCart-> cart so it appends elements rather than replaces
    //https://stackoverflow.com/questions/2786857/reading-selected-items-from-qtablewidget?utm_medium=organic&utm_source=google_rich_qa&utm_campaign=google_rich_qa
    //for (int i=0;i!=visitedRows.size();visitedRows.pop_back())

    QList<int> visitedRows2;
    for( int i =0;  i<ui->tableWidget_2->selectedItems().size();i++){
        visited = false;
        temprow = ui->tableWidget_2->selectedItems()[i]->row();

        for(int j=0; j< visitedRows2.size();j++){
            //cout<<"temprow: "<< temprow<< " visitedRows: "<< visitedRows[j]<< endl;
            if(temprow == visitedRows2[j]){
                //cout<< "denied entry to :"<< temprow<< " visitedRows: "<< visitedRows[j]<< endl;
                visited = true;
            }
        }

        //cout<< temprow<< endl;
        if(visited == false){
            //cout<<"added row Bundle: "<<temprow<<endl;
            visitedRows2.push_back(temprow);
            out.push_back(ui->tableWidget_2->item(temprow,0));
            out.push_back(ui->tableWidget_2->item(temprow,1));
        }


    }
    mCart->getUi()->uiCartTable->setCart(out);
        //cout<<"--------------------------------------"<<endl;
    return out;

};
MainWindow::~MainWindow()
{
    delete ui;
}
