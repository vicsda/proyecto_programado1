//
// Created by David on 5/2/2022.
//

#ifndef PROYECTO_1_EIF204_ARREGLO_H
#define PROYECTO_1_EIF204_ARREGLO_H

#include "Utilidades.h"
#include "Asiento.h"

/*
                                                    CLASE GENERICA - 'Lista'

  Esta es la implementacion generica de la estructura de datos tipo 'arreglo'. Se utiliza para salvar la mayoria de instancias cuyo
  limite de ingreso es sabido (y en donde la funcionalidad de 'Random Access' puede ser mas util).

  Esta posee una variable tipo 'bool' llamada 'Composicion'. Se encarga de "analizar" si una instancia 'x' del contenedor es de agregacion
  (no se encarga de la existencia de sus objetos) o composicion (se encarga de la vida de sus objetos).

*/

template<class T>
class Arreglo : public Object {
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

    int getTamVector() const {
        return tam;
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

    bool eliminarUltimoElemento() {

        if(vec[0] == nullptr) { return false; }

        if(composicion) {
            delete vec[cant-1];
        }

        vec[cant-1] = nullptr;
        cant--;
        return true;
    }

    bool resetearContenedor(int nuevoTam) {

        for(int i = 0; i < tam; i++) {
            delete vec[i];
        }
        delete[] vec;

        cant = 0;
        tam = nuevoTam;
        vec = new T[tam];
        for(int i = 0; i < tam; i++) {
            vec[i] = nullptr;
        }

        return true;
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
