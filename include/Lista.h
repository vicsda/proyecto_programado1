//
// Created by David on 5/2/2022.
//

#ifndef PROYECTO_1_EIF204_LISTA_H
#define PROYECTO_1_EIF204_LISTA_H

#include "Nodo.h"

template <class T>
class Lista {
private:
    Nodo<T>* cabeza;
    int cant;
    bool composicion;
public:
    Lista(bool composicion) : cabeza(nullptr), cant(0), composicion(composicion) {}
    ~Lista() {
        Nodo<T>* temp = cabeza;
        Nodo<T>* sig;
        while(temp != nullptr) {
            sig = temp->getSig();
            delete temp;
            temp = sig;
        }
    }

    int getCantDeElementos() {
        return cant;
    }

    bool checkarSiElementoExisteSegunId(string id) {
        Nodo<T>* temp = cabeza;
        while(temp != nullptr) {
            if(temp->getDatos()->getId() == id) {
                return true;
            }
            temp = temp->getSig();
        }
        return false;
    }

    T devolverElementoSegunId(string id) {
        Nodo<T>* temp = cabeza;
        while(temp != nullptr) {
            if(temp->getDatos()->getId() == id) {
                return temp->getDatos();
            }
            temp = temp->getSig();
        }
        return nullptr;
    }

    bool agregarElemento(T nuevoElemento) {
        if(!checkarSiElementoExisteSegunId(nuevoElemento->getId()) and (nuevoElemento != nullptr)) {
            Nodo<T>* nuevoNodo = new Nodo<T>(nuevoElemento, nullptr, composicion);
            if(cabeza == nullptr) {
                cabeza = nuevoNodo;
            }
            else {
                Nodo<T>* temp = cabeza;
                while(temp->getSig() != nullptr) {
                    temp = temp->getSig();
                }
                temp->setSig(nuevoNodo);
            }
            cant++;
            return true;
        }

        return false;
    }

    bool eliminarElementoSegunId(string id) {

        if(cabeza->getDatos()->getId() == id) {
            Nodo<T>* elimCab = cabeza;
            cabeza = cabeza->getSig();
            if(composicion) {
                //delete elimCab;
            }
            cant--;
            return true;
        }

        Nodo<T>* temp = cabeza;
        while(temp->getSig() != nullptr) {
            if(temp->getSig()->getDatos()->getId() == id) {
                Nodo<T>* elimEle = temp->getSig();
                temp->setSig(temp->getSig()->getSig());
                if(composicion) {
                    // delete elimEle;
                }
                cant--;
                return true;
            }
            temp = temp->getSig();
        }

        if(temp->getDatos()->getId() == id) {
            temp = cabeza;
            while (temp->getSig()->getSig() != nullptr) {
                temp = temp->getSig();
            }
            Nodo<T>* elimFin = temp->getSig();
            temp->setSig(nullptr);
            if(composicion) {
                //  delete elimFin;
            }
            cant--;
            return true;
        }

        return false;
    }

    string toString() {
        stringstream x;
        Nodo<T>* temp = cabeza;
        while(temp != nullptr) {
            x << temp->getDatos()->toString();
            temp = temp->getSig();
            if(temp != nullptr) {
                x << "\n\n";
            }
        }
        return x.str();
    }
};

#endif //PROYECTO_1_EIF204_LISTA_H
