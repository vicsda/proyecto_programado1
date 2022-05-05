//
// Created by David on 5/2/2022.
//

#ifndef PROYECTO_1_EIF204_VISTABUS_H
#define PROYECTO_1_EIF204_VISTABUS_H

#include "../include/Utilidades.h"

class VistaBus {
public:
    static int menuBuses(int &op);
    static void capturarDatosParaAgregarBus(string &placaBus, string &modelo);
    static void mensajeBusAgregadoExitosamente();
    static void capturarDatosParaBorrarBus(string &placaBus);
    static void mensajeBusEliminadoExitosamente();
    static void escribirDatosDeBuses(string &data);
};


#endif //PROYECTO_1_EIF204_VISTABUS_H
