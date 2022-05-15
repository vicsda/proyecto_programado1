//
// Created by David on 5/8/2022.
//

#ifndef PROYECTO_PROGRAMADO1_VISTAPRINCIPAL_H
#define PROYECTO_PROGRAMADO1_VISTAPRINCIPAL_H

#include "../include/Utilidades.h"
#include "Excepcion/Excepcion.h"
#include <conio.h>

class VistaPrincipal {
public:
    static int menuPrincipal(int &op);
    static int menuConfiguraciones(int &op);
    static int menuReportes(int &op);
    static void mensajeDeError();
};

#endif //PROYECTO_PROGRAMADO1_VISTAPRINCIPAL_H
