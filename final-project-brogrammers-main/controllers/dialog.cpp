#include "dialog.h"
#include "ui_dialog.h"


/*! 
 *  \brief     This is a Page that will appear in case of errors
 *  \details   If the user enters any invalid data during login or adding new professors or anything else this page will appear.
 *  \author    Amir Hesham
 *  \copyright Brogrammers.
 */


Dialog::Dialog(QWidget *parent, QString message) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->lbl_error->setText(message);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btn_close_clicked()
{
    this->close();
}

