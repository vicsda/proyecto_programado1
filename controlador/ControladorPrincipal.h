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

//PSEUDO-IMPLEMENTACION DEL MANEJO DE CONTROLADORAS:
// Se hace una simulacion del rol de las controladoras en el sistema. No es fiel, pues algunas de estas poseen
// logica del negocio en sus metodos, lo cual tenemos presente que no es adecuado. La separacion de la logica
// y la interfaz grafica si es razonable

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
