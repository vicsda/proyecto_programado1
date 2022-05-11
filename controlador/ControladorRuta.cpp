//
// Created by David on 5/3/2022.
//

#include "ControladorRuta.h"

ControladorRuta::ControladorRuta() {
    dbRuta = new Lista<RutaViaje*>(true);
}
ControladorRuta::ControladorRuta(Lista<RutaViaje*>* dbRuta)
        : dbRuta(dbRuta) {}
ControladorRuta::~ControladorRuta() {}

void ControladorRuta::menuRuta(Lista<Bus*>* dbBus, Lista<Tiquete*>* dbTiquete) {
    int op = 0;
    while(VistaRuta::menuDeRutas(op) != 3) {
        switch(op) {
            case 1:
                insertarRuta(dbBus);
                break;
            case 2:
                eliminarRuta(dbTiquete);
                break;
            default:
                cout << "INVALIDO";
                break;
        }
    }
}
void ControladorRuta::insertarRuta(Lista<Bus*>* dbBus) {
    string idCodRuta;
    string nomRuta;
    string idNumPlaca;
    int numBuses;

    VistaRuta::capturarDatosParaAgregarRuta(idCodRuta, nomRuta, numBuses);

    if(!dbRuta->checkarSiElementoExisteSegunId(idCodRuta)) {

        RutaViaje* nuevaRuta = new RutaViaje(idCodRuta, nomRuta);

        while(numBuses) {

            VistaRuta::capturarPlacaDeBusParaRuta(idNumPlaca);
            Bus* ptoBus = dbBus->devolverElementoSegunId(idNumPlaca);
            if( !dbBus->checkarSiElementoExisteSegunId(idNumPlaca) || !nuevaRuta->anadirBusEnRuta(ptoBus) ) {
                delete nuevaRuta;
                VistaRuta::mensajeDeError();
                return;
            }

            numBuses--;
        }

        dbRuta->agregarElemento(nuevaRuta);
        VistaRuta::mensajeRutaAgregadaExitosamente();
    } else {
        VistaRuta::mensajeDeError();
    }
}
void ControladorRuta::eliminarRuta(Lista<Tiquete*>* dbTiquete) {
    string idCodRuta;
    VistaRuta::capturarDatosParaEliminarRuta(idCodRuta);
    if( dbRuta->eliminarElementoSegunId(idCodRuta) ) {

        //eliminar, si existen, las instancias en donde aparezca este cod de ruta en tiquetes
        dbTiquete->eliminarElementosSegunCodRuta(idCodRuta);

        VistaRuta::mensajeRutaEliminadaExitosamente();
    } else {
        VistaRuta::mensajeDeError();
    }
}
void ControladorRuta::mostrarRutas() {
    VistaRuta::escribirDisponibilidadDePasajerosPorRuta(dbRuta->toString());
}