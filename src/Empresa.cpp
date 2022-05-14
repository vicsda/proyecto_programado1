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


// conexiones con bus
Bus* Empresa::devolverBusSegunPlaca(string placa) {
    return dbBus->devolverElementoSegunId(placa);
}


//conexiones con ruta
RutaViaje* Empresa::devolverRutaSegunCodigo(string codRuta) {
    return dbRuta->devolverElementoSegunId(codRuta);
}
void Empresa::eliminarRutasConInstDeBus(string placa) {
    for(int i = 0; i < dbRuta->getCantDeElementos(); i++) {
        RutaViaje* rutaPos = dbRuta->getElementoEnPosEspec(i);
        rutaPos->eliminarBusSegunPlaca(placa);
    }
}
bool Empresa::checkarSiRutaExisteSegunCod(string codRuta) {
    return dbRuta->checkarSiElementoExisteSegunId(codRuta);
}


//conexiones con tiquete
void Empresa::eliminarTiquetesConInstDeBus(string placa) {
    dbTiquete->eliminarElementosSegunBusAsign(placa);
}
void Empresa::eliminarTiquetesConInstDeRuta(string codRuta) {
    dbTiquete->eliminarElementosSegunCodRuta(codRuta);
}