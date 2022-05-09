//
// Created by Francisco on 27/04/2022.
//

#ifndef PROYECTO_1_EIF204_DATOSBUS_H
#define PROYECTO_1_EIF204_DATOSBUS_H

#include "Utilidades.h"

class DatosBus {
public:
    static int getCapacidadMaxima(string);
    static bool isModeloValido(string inModelo);
    static int realizarCalculoAforo(int, string);
};

#endif //PROYECTO_1_EIF204_DATOSBUS_H
