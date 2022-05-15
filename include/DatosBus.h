//
// Created by Francisco on 27/04/2022.
//

#ifndef PROYECTO_1_EIF204_DATOSBUS_H
#define PROYECTO_1_EIF204_DATOSBUS_H

#include "Utilidades.h"

/*
                                                CLASE DE SERVICIO - 'DatosBus'

  Esta clase nace de nuestra necesidad por distinguir a los distintos tipos de buses que componen al sistema. Estos metodos reciben el
  'tipo de modelo' de cada bus (en formato de string) y retornan valores afines a estos.

*/

class DatosBus {
public:
    static int getCapacidadMaxima(string);
    static bool isModeloValido(string inModelo);
    static int realizarCalculoAforo(int, string);
};

#endif //PROYECTO_1_EIF204_DATOSBUS_H
