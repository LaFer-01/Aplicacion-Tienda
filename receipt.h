#ifndef RECEIPT_H
#define RECEIPT_H

#include <QDialog>

namespace Ui {
class Receipt;
}

class Receipt : public QDialog
{
    Q_OBJECT

public:
    explicit Receipt(QWidget *parent = nullptr);
    ~Receipt();
    void setRecibo(QString recibo);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::Receipt *ui;
};

#endif // RECEIPT_H
