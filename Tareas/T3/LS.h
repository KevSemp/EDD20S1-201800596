#ifndef LS_H
#define LS_H
#include<iostream>
#include <string>
using namespace std;


class Nodo{
public:
    Nodo(int id_,string nombre_){
        siguiente=0;
        id = id_;
        nombre=nombre_;
    }
    Nodo *getSiguiente(){return siguiente;}
    void setSiguiente(Nodo *n){siguiente=n;}
    int getId(){return id;}
    string getNombre(){return nombre;}

private:
    Nodo* siguiente;
    int id;
    string nombre;
};

class ListaSimple{
public:
    ListaSimple(){
        primero=0;
        ultimo=0;
        size=0;
    }

    int getTamanio(){return size;}
    void insertar(int id,string nombre){
        Nodo *n = new Nodo(id,nombre);
        if(this->estaVacia()){
            this->primero=n;
            this->ultimo =n;
            this->size++;
        }else{
            this->ultimo->setSiguiente(n);
            this->ultimo=n;
            this->size++;
        }
    }

    void buscarElementoEnPos(int id){
        int recorrido = 0;
        Nodo *temp = this->primero;
        if(this->estaVacia()){
            cout<<"No se puede buscar porque la lista esta vacia"<<"\n";
        }else if(id>this->size){
            cout<<"El id buscado es mayor al tamanio de la lista\n";
        }
        else{
            if(temp!=0){
                while (temp!=0) {
                    if(recorrido == id){
                        cout<<"El carnet buscado es: "<< temp->getId()<<"  El nombre buscado es: "<< temp->getNombre()<<" En la posicion"<<id<<"\n";
                        break;
                    }else{
                        temp = temp->getSiguiente();
                        recorrido++;
                    }
                }
            }
        }
    }


    void eliminar(Nodo n){
        Nodo *temp = this->primero;
        if(this->estaVacia()){
            cout<<"No se puede eliminar porque la lista esta vacia"<<"\n";
        }else{
            while (temp!=0) {
                if(n.getId() == temp->getId() && n.getNombre()== n.getNombre()){
                    cout<<"El carnet desde que se eliminara es: "<< temp->getId()<<"  El nombre desde que se eliminara es: "<< temp->getNombre()<<"\n";
                    temp->setSiguiente(0);
                    imprimirLs();
                    break;
                }else{
                    temp = temp->getSiguiente();
                }
            }
        }
    }

    void imprimirLs(){
        Nodo *temp = this->primero;
        if (this->estaVacia()){
            cout<<"Esta Vacia"<<"\n";
        }else{
            while (temp!=0) {
                cout<<"El carnet es: "<< temp->getId()<<"  El nombre es: "<< temp->getNombre()<<"\n";
                temp=temp->getSiguiente();
            }
        }
        

    }

private:
    bool estaVacia(){return size==0;}
    int size;
    Nodo *primero;
    Nodo *ultimo;
};

#endif // LS_H
