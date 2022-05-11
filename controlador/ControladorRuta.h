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

    void menuRuta(Lista<Bus*>* dbBus, Lista<Tiquete*>* dbTiquete);
    void insertarRuta(Lista<Bus*>* dbBus);
    void eliminarRuta(Lista<Tiquete*>* dbTiquete);
    void mostrarRutas();
};

#endif //PROYECTO_1_EIF204_CONTROLADORRUTA_H
