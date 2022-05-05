//
// Created by David on 5/3/2022.
//

#include "ControladorRuta.h"

ControladorRuta::ControladorRuta() {
    dbRuta = new Lista<RutaViaje*>(true);
}
ControladorRuta::ControladorRuta(Lista<RutaViaje*>* dbRuta) : dbRuta(dbRuta) {}
ControladorRuta::~ControladorRuta() {
    delete dbRuta;
}

void ControladorRuta::control0(Lista<Bus*>* dbBus) {
    int op = 0;
    while(VistaRuta::menuDeRutas(op) != 4) {
        switch(op) {
            case 1:
                control1(dbBus);
                break;
            case 2:
                control2();
                break;
            case 3:
                control3();
                break;
            case 4:
                break;
            default:
                "INVALIDO";
                break;
        }
    }
}
void ControladorRuta::control1(Lista<Bus*>* dbBus) {
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
                return;
            }

            numBuses--;
        }

        dbRuta->agregarElemento(nuevaRuta);
        VistaRuta::mensajeRutaAgregadaExitosamente();
    }
}
void ControladorRuta::control2() {
    string idCodRuta;
    VistaRuta::capturarDatosParaEliminarRuta(idCodRuta);
    if( dbRuta->eliminarElementoSegunId(idCodRuta) ) {
        VistaRuta::mensajeRutaEliminadaExitosamente();
    }
}
void ControladorRuta::control3() {
    VistaRuta::escribirDatosDeRutas(dbRuta->toString());
}