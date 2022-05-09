//
// Created by Daniela Madrigal on 5/5/2022.
//

#ifndef PROYECTO_PROGRAMADO1_VISTATIQUETE_H
#define PROYECTO_PROGRAMADO1_VISTATIQUETE_H
#include "../include/Utilidades.h"
#include <cstdlib>
#include <conio.h>

class VistaTiquete {
public:
    static void capturarDatosParaAgregarTiquete(string &codRutaAsign, string &cedulaDeComprador, int &cantidadTiquetes);
    static void mensajeDeCompraRealizadaExitosamente();
    static void mensajeDeError();
    static void escribirDatosDeTiquetes(string data);
};


#endif //PROYECTO_PROGRAMADO1_VISTATIQUETE_H
