//
// Created by David on 5/8/2022.
//

#ifndef PROYECTO_PROGRAMADO1_CONTROLADORPRINCIPAL_H
#define PROYECTO_PROGRAMADO1_CONTROLADORPRINCIPAL_H

#include "../include/Empresa.h"

#include "ControladorBus.h"
#include "ControladorRuta.h"
#include "ControladorTiquete.h"

#include "../interfaz/VistaPrincipal.h"
#include "../interfaz/VistaBus.h"
#include "../interfaz/VistaRuta.h"
#include "../interfaz/VistaTiquete.h"

class ControladorPrincipal {
private:
    Empresa* dbEmpresa;
    ControladorBus* controlDbBus;
    ControladorRuta* controlDbRuta;
    ControladorTiquete* controlDbTiq;
public:
    ControladorPrincipal();
    ControladorPrincipal(Empresa* dbEmpresa);
    ~ControladorPrincipal();
    void menuPrincipal();
    void menuConfiguraciones();
    void compraTiquetes();
    void menuReportes();
};

#endif //PROYECTO_PROGRAMADO1_CONTROLADORPRINCIPAL_H
