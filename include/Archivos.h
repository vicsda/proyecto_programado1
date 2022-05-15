//
// Created by David on 5/15/2022.
//

#ifndef PROYECTO_PROGRAMADO1_ARCHIVOS_H
#define PROYECTO_PROGRAMADO1_ARCHIVOS_H
#include "Utilidades.h"
#include "Lista.h"

template <class tipo>
class Archivos {
public:
    static void guardarDatosDeLista(tipo* n, string nombreLista){
        ofstream salida;
        salida.open(nombreLista, ios::out);
        salida<<n->toString();
        salida.close();
    }
};

#endif //PROYECTO_PROGRAMADO1_ARCHIVOS_H
