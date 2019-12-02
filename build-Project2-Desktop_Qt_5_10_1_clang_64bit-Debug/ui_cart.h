/********************************************************************************
** Form generated from reading UI file 'cart.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CART_H
#define UI_CART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <carttable.h>

QT_BEGIN_NAMESPACE

class Ui_Cart
{
public:
    QLabel *PriceLabel;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    CartTable *uiCartTable;
    QGridLayout *gridLayout;
    QPushButton *CheckoutButton;
    QPushButton *DeleteButton;

    void setupUi(QWidget *Cart)
    {
        if (Cart->objectName().isEmpty())
            Cart->setObjectName(QStringLiteral("Cart"));
        Cart->resize(258, 353);
        PriceLabel = new QLabel(Cart);
        PriceLabel->setObjectName(QStringLiteral("PriceLabel"));
        PriceLabel->setGeometry(QRect(20, 340, 121, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        PriceLabel->setFont(font);
        label = new QLabel(Cart);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 310, 171, 31));
        verticalLayoutWidget = new QWidget(Cart);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 10, 221, 271));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        uiCartTable = new CartTable(verticalLayoutWidget);
        if (uiCartTable->columnCount() < 2)
            uiCartTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        uiCartTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        uiCartTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        uiCartTable->setObjectName(QStringLiteral("uiCartTable"));

        verticalLayout->addWidget(uiCartTable);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        CheckoutButton = new QPushButton(verticalLayoutWidget);
        CheckoutButton->setObjectName(QStringLiteral("CheckoutButton"));

        gridLayout->addWidget(CheckoutButton, 1, 1, 1, 1);

        DeleteButton = new QPushButton(verticalLayoutWidget);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));
        DeleteButton->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(DeleteButton, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Cart);

        QMetaObject::connectSlotsByName(Cart);
    } // setupUi

    void retranslateUi(QWidget *Cart)
    {
        Cart->setWindowTitle(QApplication::translate("Cart", "Form", nullptr));
        PriceLabel->setText(QString());
        label->setText(QApplication::translate("Cart", "<html><head/><body><p>Total:</p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = uiCartTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Cart", "Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = uiCartTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Cart", "Price", nullptr));
        CheckoutButton->setText(QApplication::translate("Cart", "Checkout", nullptr));
        DeleteButton->setText(QApplication::translate("Cart", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cart: public Ui_Cart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CART_H
