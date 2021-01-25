#include "receipt.h"
#include "ui_receipt.h"

Receipt::Receipt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Receipt)
{
    ui->setupUi(this);
}

Receipt::~Receipt()
{
    delete ui;
}

void Receipt::setRecibo(QString recibo)
{
    ui->outRecibo->appendPlainText(recibo);
}

void Receipt::on_buttonBox_accepted()
{
    accept();
}

void Receipt::on_buttonBox_rejected()
{
    reject();
}
