//
// Created by David on 5/3/2022.
//

#ifndef PROYECTO_1_EIF204_CONTROLADORRUTA_H
#define PROYECTO_1_EIF204_CONTROLADORRUTA_H

#include "../include/RutaViaje.h"
#include "../include/Lista.h"
#include "../interfaz/VistaRuta.h"

class ControladorRuta {
private:
    Lista<RutaViaje*>* dbRuta;
public:
    ControladorRuta();
    ControladorRuta(Lista<RutaViaje*>* dbRuta);
    ~ControladorRuta();

    void control0(Lista<Bus*>* dbBus);
    void control1(Lista<Bus*>* dbBus);
    void control2();
    void control3();
};

#endif //PROYECTO_1_EIF204_CONTROLADORRUTA_H
