
#include "cart.h"
#include "ui_cart.h"
#include "cartvisitor.h"
#include "mainwindow.h"
#include "carttable.h"
#include "visitor.h"
#include <QString>
#include <QFile>
#include <QDir>
//#include <QC>
//#include <QtCSV>
Cart::Cart(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cart)
{
   // Parent = parent;
    ui->setupUi(this);
    //ui->CartTable;
    connect(ui->CheckoutButton,SIGNAL(clicked(bool)),ui->uiCartTable,SLOT(checkoutTable(bool)));
    connect(ui->CheckoutButton,SIGNAL(clicked(bool)),this,SLOT(Checkout()));


}

Cart::~Cart()
{
    delete ui;
}

void Cart :: Checkout(){

    QString total = "Total: ";
    ui->DeleteButton->setEnabled(false);
    ui->CheckoutButton->setEnabled(false);
    CartVisitor  CV ;
    //CV = new CartVisitor;
    //CV = new CartVisitor ;
    ui->uiCartTable->AcceptVisitor(&CV);
    QString totalprice= QString :: number (ui->uiCartTable->getTotal());
    total += totalprice;

    ui->label->setText(total);
    ui->label->setStyleSheet("font-weight: bold; color: red;");

    QStringList strList;
    //QtCSV::StringData strData;
    //cout<<"here"<< endl;
    QList<QTableWidgetItem *> temp = ui->uiCartTable->getCart();
    QString fileName = "test.csv";
    if (fileName.isEmpty()){
            //cout<<"here"<< endl;
            return;
    }

     QFile file(fileName);
     if (!file.open(QIODevice::WriteOnly)) {
         cout<< "ERROR OPENING FILE"<< endl;
         return;
     }

     QDataStream out(&file);
         //out<< strList;

    QString tempstring="";
    QString tempstring2="";
    for(int i=0; i<this->ui->uiCartTable->rowCount();i++ ) {
        //cout<<"here"<< endl;
        tempstring= "";
        //tempstring2="";
        tempstring +=this->ui->uiCartTable->item(i,0)->text().remove(QRegExp("[\\n\\t\\r]"));;
        //temp.pop_front();
        //tempstring2[0]="";
        //tempstring +=
        tempstring += ",";
        tempstring += this->ui->uiCartTable->item(i,1)->text().remove(QRegExp("[\\n\\t\\r]"));;
        tempstring.remove(QRegExp("[\\n\\t\\r]"));;
        tempstring += "\r";
        //temp.pop_front();
        out<< tempstring;

        //strList << "/n";
    }
    //out<< total;
    //Qfile
    //QDataStream out(&file);
    //out<< strList;
    //QString filePath = QDir::currentPath() + "/test.csv";
    //QtCSV::Writer::write(filePath, strData);
};
