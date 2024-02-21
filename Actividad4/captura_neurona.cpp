#include "captura_neurona.h"
#include "./ui_captura_neurona.h"

Captura_Neurona::Captura_Neurona(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Captura_Neurona)
{
    ui->setupUi(this);

    // Obtener punteros a los QLineEdit y botones
    lineEditList = findChildren<QLineEdit*>();
    pushButtonIngresarDatos = findChild<QPushButton*>("pushButton_Ingresar_Datos");
    pushButtonMostrar = findChild<QPushButton*>("Mostrar");

    // Conectar las señales de clic de los botones a las funciones correspondientes
    connect(pushButtonIngresarDatos, &QPushButton::clicked, this, &Captura_Neurona::ingresarDatos);
    connect(pushButtonMostrar, &QPushButton::clicked, this, &Captura_Neurona::mostrarDatos);
}

Captura_Neurona::~Captura_Neurona()
{
    delete ui;
}

void Captura_Neurona::ingresarDatos()
{
    // Iterar sobre los QLineEdit y agregar los datos a la lista
    for (auto lineEdit : lineEditList)
    {
        dataList.append(lineEdit->text());
    }
}

void Captura_Neurona::mostrarDatos()
{
    // Mostrar los datos almacenados en la lista en la consola
    qDebug() << "Datos ingresados:";
    for (const QString& data : dataList)
    {
        qDebug() << data;
    }
}
