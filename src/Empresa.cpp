//
// Created by David on 5/8/2022.
//

#include "../include/Empresa.h"

Empresa::Empresa() {
    dbBus = new Lista<Bus*>(true);
    dbRuta = new Lista<RutaViaje*>(true);
    dbTiquete = new Lista<Tiquete*>(true);
}
Empresa::Empresa(Lista<Bus*>* dbBus, Lista<RutaViaje*>* dbRuta, Lista<Tiquete*>* dbTiquete)
        : dbBus(dbBus), dbRuta(dbRuta), dbTiquete(dbTiquete) {}
Empresa::~Empresa() {
    delete dbBus;
    delete dbRuta;
    delete dbTiquete;
}
Lista<Bus*>* Empresa::getDbBus() {
    return dbBus;
}
Lista<RutaViaje*>* Empresa::getDbRuta() {
    return dbRuta;
}
Lista<Tiquete*>* Empresa::getDbTiquete() {
    return dbTiquete;
}
