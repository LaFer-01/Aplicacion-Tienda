#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>

#include "producto.h"
#include "about.h"
#include "receipt.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();

public slots:
    void mostrarPrecio(int indice);
private slots:
    void on_pushButton_2_clicked();
    void on_cmdAgregar_clicked();

    void on_inCedula_editingFinished();

    void on_cmdFinalizar_clicked();

    void on_inNombre_editingFinished();

    void on_actionAcerca_de_Tienda_triggered();

private:
    Ui::Principal *ui;
    //Creando una lista de productos
    //con un objeto dinamico
    QList<Producto*> m_productos;

    float m_subtotal;
    const float IVA = 0.12;

    //Funcion para que se carguen todos los datos
    void cargarDatos();
    //Permite inicializar cosas que necesitaremos
    void inicializarWidgets();

    void calcular(float subtotal);
    void validarCedula();
    void validarNombre();
    bool validarCampoCedula();


    bool buscar(Producto *producto, int cantidad);

};
#endif // PRINCIPAL_H
