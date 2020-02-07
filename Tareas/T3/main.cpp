#include <QCoreApplication>
#include "LS.h"

int main(int argc, char *argv[])
{
    ListaSimple ls;
    ls.imprimirLs();
    ls.insertar(1,"A");
    ls.insertar(2,"B");
    ls.insertar(3,"C");
    ls.insertar(4,"D");
    ls.insertar(5,"E");
    ls.insertar(6,"F");
    ls.insertar(7,"G");
    ls.insertar(8,"H");
    ls.insertar(9,"I");
    ls.insertar(10,"J");
    ls.insertar(11,"K");
    ls.insertar(12,"L");
    ls.insertar(13,"M");
    ls.imprimirLs();
    cout<< "\n\nElementos en las posiciones \n";
    ls.buscarElementoEnPos(11);
    ls.buscarElementoEnPos(1);
    ls.buscarElementoEnPos(0);
    ls.buscarElementoEnPos(15);
    ls.buscarElementoEnPos(7);
    ls.buscarElementoEnPos(4);


    cout<< "\n\nEiminar \n";

    ls.eliminar(Nodo(10,"J"));








    QCoreApplication a(argc, argv);

    return a.exec();
}
