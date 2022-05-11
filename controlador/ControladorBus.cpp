//
// Created by David on 5/2/2022.
//

#include "ControladorBus.h"

ControladorBus::ControladorBus() {
    dbBus = new Lista<Bus*>(true);
}
ControladorBus::ControladorBus(Lista<Bus*>* dbBus)
        : dbBus(dbBus) {}
ControladorBus::~ControladorBus() {}

void ControladorBus::menuBus(Lista<RutaViaje*>* dbRuta, Lista<Tiquete*>* dbTiquete) {
    int op = 0;
    while(VistaBus::menuDeBuses(op) != 3) {
        switch(op) {
            case 1:
                insertarBus();
                break;
            case 2:
                eliminarBus(dbRuta, dbTiquete);
                break;
            default:
                "INVALIDO"; // DE ESTO SE DEBE DE ENCARGAR EL MANEJO DE EXCEPCIONES Y/O VISTA
                break;
        }
    }
}
void ControladorBus::insertarBus() {   // BUSCAR FORMA DE HACER QUE NO PERMITA INGRESAR "MODELOS INVALIDOS"
    string idNumPlaca;
    string modelo;
    VistaBus::capturarDatosParaAgregarBus(idNumPlaca, modelo);
    Bus* nuevoBus = new Bus(idNumPlaca, modelo);
    if( dbBus->agregarElemento(nuevoBus) and DatosBus::isModeloValido(modelo) ) {
        VistaBus::mensajeBusAgregadoExitosamente();
    }
    else {
        delete nuevoBus;
        VistaBus::mensajeDeError();
    }
}
void ControladorBus::eliminarBus(Lista<RutaViaje*>* dbRuta, Lista<Tiquete*>* dbTiquete) {
    string idNumPlaca;
    VistaBus::capturarDatosParaBorrarBus(idNumPlaca);

    //checkar que el bus realmente existe en la base de datos de buses
    if(dbBus->checkarSiElementoExisteSegunId(idNumPlaca)) {

        //eliminar referencias del objeto, si las hay, en la base de datos de rutas
        for(int i = 0; i < dbRuta->getCantDeElementos(); i++) {
            RutaViaje* rutaPos = dbRuta->getElementoEnPosEspec(i);
            rutaPos->eliminarBusSegunPlaca(idNumPlaca);
        }

        //eliminar tiquetes inscritos con ese numero de placa
        dbTiquete->eliminarElementosSegunBusAsign(idNumPlaca);

        //eliminar objeto de la base de datos de buses
        dbBus->eliminarElementoSegunId(idNumPlaca);

        VistaBus::mensajeBusEliminadoExitosamente();
    } else {
        VistaBus::mensajeDeError();
    }
}
bool ControladorBus::cambiarCapacidadSegunRestriccion() {
    int restriccionDeseada;
    char op;

    //le pido los datos deseados al usuario. le aviso que esto eliminara la nomina actual
    VistaBus::capturarDatoDeRestriccion(restriccionDeseada);
    VistaBus::mensajeDeAdvertenciaAnteCambio(op);

    //si el usuario accedio, entonces proceder
    if(op == 'S') {

        //reseteo de los asientos (con nuevo valor de tamano)
        for(int i = 0; i < dbBus->getCantDeElementos(); i++) {
            Bus* busPos = dbBus->getElementoEnPosEspec(i);
            busPos->resetearAsientosSegunRestriccion(restriccionDeseada);
        }

        VistaBus::mensajeDeCambioSatisfactorio();
        return true;
    }

    return false;
}
void ControladorBus::mostrarBuses() {
    string data = dbBus->toString();
    VistaBus::escribirBusesEnPantalla(data);
}