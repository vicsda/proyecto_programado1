//
// Created by David on 5/2/2022.
//

#ifndef PROYECTO_1_EIF204_CONTROLADORBUS_H
#define PROYECTO_1_EIF204_CONTROLADORBUS_H

#include "../interfaz/VistaBus.h"
#include "../include/Bus.h"
#include "../include/RutaViaje.h"
#include "../include/Lista.h"

class ControladorBus {
private:
    Lista<Bus*>* dbBus;
public:
    ControladorBus();
    ControladorBus(Lista<Bus*>* dbBus);
    ~ControladorBus();

    void menuBus(Lista<RutaViaje*>* dbRuta, Lista<Tiquete*>* dbTiquete);
    void insertarBus();
    void eliminarBus(Lista<RutaViaje*>* dbRuta, Lista<Tiquete*>* dbTiquete);
    bool cambiarCapacidadSegunRestriccion();
    void mostrarBuses();
};


#endif //PROYECTO_1_EIF204_CONTROLADORBUS_H
