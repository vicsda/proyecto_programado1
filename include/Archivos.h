//
// Created by David on 5/15/2022.
//

#ifndef PROYECTO_PROGRAMADO1_ARCHIVOS_H
#define PROYECTO_PROGRAMADO1_ARCHIVOS_H
#include "Utilidades.h"
#include "Lista.h"

/*
                                                    MANEJO DE ARCHIVOS

    Clase encargada de realizar el guardado de informacion en archivos de texto. Solo implementamos el guardado de la informacion de texto,
    no recuperacion.

*/

template <class tipo>
class Archivos {
public:
    static void guardarDatosDeLista(tipo* n, string nombreLista){
        ofstream salida;
        salida.open(nombreLista, ios::out);
        if(salida.is_open()) {
            salida<<n->toString();
            salida.close();
        }
    }
};

#endif //PROYECTO_PROGRAMADO1_ARCHIVOS_H
