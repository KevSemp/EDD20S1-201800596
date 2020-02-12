#ifndef LISTADOBLE_H
#define LISTADOBLE_H
#include<iostream>
#include <string>
using namespace std;


class Nodo{
public:
    Nodo(char letra_){
        siguiente=0;
        anterior=0;

        letra=letra_;
    }
    Nodo *getSiguiente(){return siguiente;}
    Nodo *getAnterior(){return anterior;}
    void setSiguiente(Nodo *n){siguiente=n;}
    void setAnterior(Nodo *n){anterior=n;}

    char getLetra(){return letra;}

private:
    Nodo* siguiente;
    Nodo* anterior;
    char letra;
};

class ListaDoble{
public:
    ListaDoble(){
        primero=0;
        ultimo=0;
        size=0;
    }

    int getTamanio(){return size;}
    //metodo para insertar al inicio
    void insertar(char letra){
        Nodo *n = new Nodo(letra);
        if(this->estaVacia()){
            this->primero=n;
            this->primero->setSiguiente(0);
            this->primero->setAnterior(0);
            this->ultimo = primero;
            this->size++;
        }else{
            this->ultimo->setSiguiente(n);
            n->setSiguiente(0);
            n->setAnterior(ultimo);
            this->ultimo=n;
            this->size++;
        }
    }



//metodo para eliminar el ultimo
    void eliminarUltimo(){

        if(this->estaVacia()){
            cout<<"No se puede eliminar porque la lista esta vacia"<<"\n";
        }else{
            Nodo *temp = this->ultimo->getAnterior();
            temp->setSiguiente(0);
            this->size--;

        }
    }


    //metodo para buscar la primera letra de la cadena de string
    void buscarLetra(string palabra)

    {
        Nodo *temp = this->primero;
        if(this->estaVacia()){
            cout<<"No se puede buscar porque la lista esta vacia"<<"\n";
        }
        else{
            if(temp!=0){
                while (temp!=0) {
                    if(temp->getLetra() == palabra[0] ){
                        cout<<"la letra es con la cual inicia es"<< temp->getLetra()<<"\n";
                        break;
                    }else{
                        temp = temp->getSiguiente();

                    }
                }
            }
        }
    }

    void imprimirLd(){
        Nodo *temp = this->primero;
        if (this->estaVacia()){
            cout<<"Esta Vacia"<<"\n";
        }else{
            while (temp!=0) {
                cout<<"la letra es: "<< temp->getLetra()<<"\n";
                temp=temp->getSiguiente();
            }
        }

    }

    void imprimirLdUl(){
        Nodo *temp = this->ultimo;
        if (this->estaVacia()){
            cout<<"Esta Vacia"<<"\n";
        }else{
            while (temp!=0) {
                cout<<"la letra es: "<< temp->getLetra()<<"\n";
                temp=temp->getAnterior();
            }
        }

    }

private:
    bool estaVacia(){return size==0;}
    int size;
    Nodo *primero;
    Nodo *ultimo;
};
#endif // LISTADOBLE_H
