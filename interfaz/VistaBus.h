//
// Created by David on 5/2/2022.
//

#ifndef PROYECTO_1_EIF204_VISTABUS_H
#define PROYECTO_1_EIF204_VISTABUS_H

#include "../include/Utilidades.h"
#include <cstdlib>
#include <conio.h>

class VistaBus {
public:
    static int menuDeBuses(int &op);
    static void capturarDatosParaAgregarBus(string &placaBus, string &modelo);
    static void mensajeBusAgregadoExitosamente();
    static void capturarDatosParaBorrarBus(string &placaBus);
    static void mensajeBusEliminadoExitosamente();
    static void mensajeDeError();
    static void escribirBusesEnPantalla(string data);

    //relacionados al manejo de restricciones en buses
    static void capturarDatoDeRestriccion(int &op);
    static void mensajeDeAdvertenciaAnteCambio(char &op);
    static void mensajeDeCambioSatisfactorio();
};


#endif //PROYECTO_1_EIF204_VISTABUS_H
