//
// Created by David on 5/3/2022.
//

#ifndef PROYECTO_1_EIF204_VISTARUTA_H
#define PROYECTO_1_EIF204_VISTARUTA_H

#include "../include/Utilidades.h"

class VistaRuta {
public:
    static int menuDeRutas(int &op);
    static void capturarDatosParaAgregarRuta(string &idCodRuta, string &nomRuta, int &numBuses);
    static void capturarPlacaDeBusParaRuta(string &idPlacaBus);
    static void mensajeRutaAgregadaExitosamente();
    static void capturarDatosParaEliminarRuta(string &idCodRuta);
    static void mensajeRutaEliminadaExitosamente();
    static void escribirDatosDeRutas(string data);
    static void escribirDisponibilidadDePasajerosPorRuta(string data);
};

#endif //PROYECTO_1_EIF204_VISTARUTA_H
