#include <QCoreApplication>
#include<listaDoble.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ListaDoble ld;
    ld.insertar('a');
    ld.insertar('b');
    ld.insertar('c');
    ld.imprimirLd();
    ld.eliminarUltimo();
    ld.imprimirLd();
    ld.buscarLetra("ala");
    return a.exec();

}
