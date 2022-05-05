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
    Lista<Bus*>* dbBuses;
public:
    ControladorBus();
    ControladorBus(Lista<Bus*>*);
    ~ControladorBus();

    void control0();
    void control1();
    void control2();
    void control3();
};


#endif //PROYECTO_1_EIF204_CONTROLADORBUS_H
