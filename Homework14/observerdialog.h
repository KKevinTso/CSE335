/*
 * Written referencing examples 3 and 4 of sample code
 */

#ifndef OBSERVERDIALOG_H
#define OBSERVERDIALOG_H
#include <QDialog>

namespace Ui {
class ObserverDialog;
}

class ObserverDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ObserverDialog(QWidget *parent = 0);
    ~ObserverDialog();

    Ui::ObserverDialog* getUi() const {return ui;}

signals:
    void resetClicked();

private slots:
    void on_ResetButton_clicked();

private:
    Ui::ObserverDialog *ui;
};

#endif // OBSERVERDIALOG_H
