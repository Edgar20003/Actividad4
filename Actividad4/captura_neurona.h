#ifndef CAPTURA_NEURONA_H
#define CAPTURA_NEURONA_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui {
class Captura_Neurona;
}
QT_END_NAMESPACE

class Captura_Neurona : public QMainWindow
{
    Q_OBJECT

public:
    Captura_Neurona(QWidget *parent = nullptr);
    ~Captura_Neurona();

private slots:
    void ingresarDatos();
    void mostrarDatos();

private:
    Ui::Captura_Neurona *ui;
    QList<QLineEdit*> lineEditList;
    QPushButton *pushButtonIngresarDatos;
    QPushButton *pushButtonMostrar;
    QList<QString> dataList;
};

#endif // CAPTURA_NEURONA_H
