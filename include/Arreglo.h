//
// Created by David on 5/2/2022.
//

#ifndef PROYECTO_1_EIF204_ARREGLO_H
#define PROYECTO_1_EIF204_ARREGLO_H

#include "Utilidades.h"

template<class T>
class Arreglo {
private:
    T* vec;
    int tam;
    int cant;
    bool composicion;
public:

    Arreglo(int tam, bool composicion) : tam(tam), cant(0), composicion(composicion) {
        vec = new T[tam];

        for(int i = 0; i < tam; i++) {
            vec[i] = nullptr;
        }
    }
    ~Arreglo() {
        if(composicion) {
            for(int i = 0; i < tam; i++) {
                delete vec[i];
            }
        }

        delete[] vec;
    }

    int getCantDeElementos() const {
        return cant;
    }

    bool agregarElemento(T input) {
        if(cant < tam) {
            vec[cant] = input;
            cant++;
            return true;
        }
        else {
            return false;
        }
    }

    string toString() {
        stringstream x;
        for(int i = 0; i < cant; i++) {
            x << vec[i]->toString();
            if((i+1) != cant) {
                x << "\n\n";
            }
        }
        return x.str();
    }
};

#endif //PROYECTO_1_EIF204_ARREGLO_H
