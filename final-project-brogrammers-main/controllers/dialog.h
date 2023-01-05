#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>




namespace Ui {
class Dialog;
}


/*!
 * \brief   In this class, there are all processes that will be run in case of error occur
 */


class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr, QString message = "Failed");
    ~Dialog();

private slots:
    void on_btn_close_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
