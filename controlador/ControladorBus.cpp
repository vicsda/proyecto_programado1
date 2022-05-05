//
// Created by David on 5/2/2022.
//

#include "ControladorBus.h"

ControladorBus::ControladorBus() {
    dbBuses = new Lista<Bus*>(true);
}
ControladorBus::ControladorBus(Lista<Bus*>* dbBuses) : dbBuses(dbBuses) {}
ControladorBus::~ControladorBus() {
    delete dbBuses;
}

void ControladorBus::control0() {
    int op = 0;
    while(VistaBus::menuBuses(op) != 4) {
        switch(op) {
            case 1:
                control1();
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
                cout << "Invalido";
        }
    }
}
void ControladorBus::control1() {
    string numPlaca;
    string modelo;
    VistaBus::capturarDatosParaAgregarBus(numPlaca, modelo);
    Bus* nuevoBus = new Bus(numPlaca, modelo);
    if ( dbBuses->agregarElemento(nuevoBus) ) {
        VistaBus::mensajeBusAgregadoExitosamente();
    }
    else {
        delete nuevoBus;
    }
}
void ControladorBus::control2() {
    string numPlaca;
    VistaBus::capturarDatosParaBorrarBus(numPlaca);
    if ( dbBuses->eliminarElementoSegunId(numPlaca) ) {
        VistaBus::mensajeBusEliminadoExitosamente();
    }
}
void ControladorBus::control3() {
    string data = dbBuses->toString();
    VistaBus::escribirDatosDeBuses(data);
}