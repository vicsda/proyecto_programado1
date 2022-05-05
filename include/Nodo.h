//
// Created by Francisco on 26/04/2022.
//

#ifndef MIPROYECTOV2_NODO_H
#define MIPROYECTOV2_NODO_H

#include "Utilidades.h"

template<class T>
class Nodo {
private:
    T datos;
    Nodo* sig;
    bool composicion;
public:
    Nodo(T datos, Nodo* sig, bool composicion) : datos(datos), sig(sig), composicion(composicion) {}
    ~Nodo() {    //CHECKAR EL COMPORTAMIENTO DE ESTE DESTRUCTOR
        if(composicion) {
            delete datos;
        }
    }

    T getDatos() const {
        return datos;
    }
    void setDatos(T datos) {
        Nodo::datos = datos;
    }
    Nodo *getSig() const {
        return sig;
    }
    void setSig(Nodo *sig) {
        Nodo::sig = sig;
    }
};

#endif //MIPROYECTOV2_NODO_H
