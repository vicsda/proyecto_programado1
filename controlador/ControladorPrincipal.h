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

/*
                                    PSEUDO-IMPLEMENTACION DEL MANEJO DE CONTROLADORAS

  Se hace una simulacion del rol de las controladoras en el sistema. No es fiel, pues algunas de estas poseen
  logica del negocio en sus metodos, lo cual tenemos presente que no es adecuado. La separacion de la logica
  y la interfaz grafica si es razonable.

  Este posee un constructor especial, el cual recibe de argumento una variable tipo 'bool'. Es utilizado para crear
  una base en la cual trabajar (Basandonos en los datos mostrados en el enunciado del Proyecto)

  Las relaciones entre controladoras hacen uso de metodos que implementamos en la clase Empresa, con el fin de
  "ocultar" los procesos internos. No consideramos que sea una solucion optima.

*/

class ControladorPrincipal {
private:
    Empresa* dbEmpresa;
    ControladorBus* controlDbBus;
    ControladorRuta* controlDbRuta;
    ControladorTiquete* controlDbTiq;
public:
    ControladorPrincipal();
    ControladorPrincipal(Empresa* dbEmpresa);
    ControladorPrincipal(bool prueba);
    ~ControladorPrincipal();
    void menuPrincipal();
    void menuConfiguraciones();
    void compraTiquetes();
    void menuReportes();
};

#endif //PROYECTO_PROGRAMADO1_CONTROLADORPRINCIPAL_H
