//
// Created by David on 5/2/2022.
//

#ifndef PROYECTO_1_EIF204_CONTROLADORBUS_H
#define PROYECTO_1_EIF204_CONTROLADORBUS_H

#include "../interfaz/VistaBus.h"
#include "../include/Bus.h"
#include "../include/Lista.h"

class ControladorBus {
private:
    Lista<Bus*>* dbBus;
public:
    ControladorBus();
    ControladorBus(Lista<Bus*>* dbBus);
    ~ControladorBus();

    void menuBus();
    void insertarBus();
    void eliminarBus();
    bool cambiarCapacidadSegunRestriccion();
    void mostrarBuses();
};


#endif //PROYECTO_1_EIF204_CONTROLADORBUS_H
