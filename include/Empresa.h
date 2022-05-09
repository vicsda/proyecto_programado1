//
// Created by David on 5/8/2022.
//

#ifndef PROYECTO_PROGRAMADO1_EMPRESA_H
#define PROYECTO_PROGRAMADO1_EMPRESA_H

#include "Bus.h"
#include "RutaViaje.h"
#include "Tiquete.h"

class Empresa {
private:
    Lista<Bus*>* dbBus;
    Lista<RutaViaje*>* dbRuta;
    Lista<Tiquete*>* dbTiquete;
public:
    Empresa();
    Empresa(Lista<Bus*>* dbBus, Lista<RutaViaje*>* dbRuta, Lista<Tiquete*>* dbTiquete);
    ~Empresa();
    Lista<Bus*>* getDbBus();
    Lista<RutaViaje*>* getDbRuta();
    Lista<Tiquete*>* getDbTiquete();
};

#endif //PROYECTO_PROGRAMADO1_EMPRESA_H
