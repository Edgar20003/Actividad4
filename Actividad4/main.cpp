#include "captura_neurona.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Captura_Neurona w;
    w.show();
    return a.exec();
}
