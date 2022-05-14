//
// Created by David on 5/2/2022.
//

#ifndef PROYECTO_1_EIF204_CONTROLADORBUS_H
#define PROYECTO_1_EIF204_CONTROLADORBUS_H

#include "../interfaz/VistaBus.h"
#include "../include/Empresa.h"

class ControladorBus {
private:
    Lista<Bus*>* dbBus;
public:
    ControladorBus();
    ControladorBus(Lista<Bus*>* dbBus);
    ~ControladorBus();

    void menuBus(Empresa* dbEmpresa);
    void insertarBus();
    void eliminarBus(Empresa* dbEmpresa);
    bool cambiarCapacidadSegunRestriccion();
    void mostrarBuses();
};


#endif //PROYECTO_1_EIF204_CONTROLADORBUS_H
