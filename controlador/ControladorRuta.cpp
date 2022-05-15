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

void ControladorRuta::menuRuta(Empresa* dbEmpresa) {
    int op = 0;
    while(VistaRuta::menuDeRutas(op) != 3) {
        switch(op) {
            case 1:
                insertarRuta(dbEmpresa);
                break;
            case 2:
                eliminarRuta(dbEmpresa);
                break;
            default:
                VistaRuta::mensajeDeError();
                break;
        }
    }
}
void ControladorRuta::insertarRuta(Empresa* dbEmpresa) {
    string idCodRuta;
    string nomRuta;
    string idNumPlaca;
    int numBuses;

    VistaRuta::capturarDatosParaAgregarRuta(idCodRuta, nomRuta, numBuses);

    if(!dbRuta->checkarSiElementoExisteSegunId(idCodRuta)) {

        RutaViaje* nuevaRuta = new RutaViaje(idCodRuta, nomRuta);

        while(numBuses) {

            VistaRuta::capturarPlacaDeBusParaRuta(idNumPlaca);
            Bus* ptoBus = dbEmpresa->devolverBusSegunPlaca(idNumPlaca);
            if(ptoBus == nullptr || !nuevaRuta->anadirBusEnRuta(ptoBus)) {
                delete nuevaRuta;
                VistaRuta::mensajeDeError();
                return;
            }
            numBuses--;
        }

        dbRuta->agregarElemento(nuevaRuta);
        Archivos<Lista<RutaViaje*>>::guardarDatosDeLista(dbRuta, "listaRutas.txt");
        VistaRuta::mensajeRutaAgregadaExitosamente();
    } else {
        VistaRuta::mensajeDeError();
    }
}
void ControladorRuta::eliminarRuta(Empresa* dbEmpresa) {
    string idCodRuta;
    VistaRuta::capturarDatosParaEliminarRuta(idCodRuta);
    if( dbRuta->eliminarElementoSegunId(idCodRuta) ) {

        //eliminar, si existen, las instancias en donde aparezca este cod de ruta en tiquetes
        dbEmpresa->eliminarTiquetesConInstDeRuta(idCodRuta);

        Archivos<Lista<RutaViaje*>>::guardarDatosDeLista(dbRuta, "listaRutas.txt");

        VistaRuta::mensajeRutaEliminadaExitosamente();
    } else {
        VistaRuta::mensajeDeError();
    }
}
void ControladorRuta::mostrarRutas() {
    VistaRuta::escribirDisponibilidadDePasajerosPorRuta(dbRuta->toString());
}