//
// Created by Daniela Madrigal on 5/5/2022.
//

#ifndef PROYECTO_PROGRAMADO1_VISTATIQUETE_H
#define PROYECTO_PROGRAMADO1_VISTATIQUETE_H
#include "../include/Utilidades.h"


class VistaTiquete {
public:
    static int menuTiquetes(int &op);
    static void capturaDatosDelCliente(string &cedulaComprador, int &cantidadPasajeros, string &codigoRuta);
    static void mensajeReservaExitosa();
    static void capturaNumTiquete(string &numTiquete);
    static void capturarDatosParaEliminarTiquete(string &numTiquete);
    static void mensajeReservaEliminadaExitosamente();
    static void escribirDatosDeTiquetes(string data);
};


#endif //PROYECTO_PROGRAMADO1_VISTATIQUETE_H
