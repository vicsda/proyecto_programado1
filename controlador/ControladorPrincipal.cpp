//
// Created by David on 5/8/2022.
//

#include "ControladorPrincipal.h"

ControladorPrincipal::ControladorPrincipal(Empresa* dbEmpresa) : dbEmpresa(dbEmpresa) {
    controlDbBus = new ControladorBus(dbEmpresa->getDbBus());
    controlDbRuta = new ControladorRuta(dbEmpresa->getDbRuta());
    controlDbTiq = new ControladorTiquete(dbEmpresa->getDbTiquete());
}
ControladorPrincipal::ControladorPrincipal() {
    dbEmpresa = new Empresa();
    controlDbBus = new ControladorBus(dbEmpresa->getDbBus());
    controlDbRuta = new ControladorRuta(dbEmpresa->getDbRuta());
    controlDbTiq = new ControladorTiquete(dbEmpresa->getDbTiquete());
}
ControladorPrincipal::~ControladorPrincipal() {
    delete dbEmpresa;
    delete controlDbBus;
    delete controlDbRuta;
    delete controlDbTiq;
}

void ControladorPrincipal::menuPrincipal() {
    int op = 0;
    while(VistaPrincipal::menuPrincipal(op) != 4) {
        switch(op) {
            case 1:
                menuConfiguraciones();
                break;
            case 2:
                compraTiquetes();
                break;
            case 3:
                menuReportes();
                break;
            default:
                cout << "INVALIDO";
                break;
        }
    }
}

void ControladorPrincipal::menuConfiguraciones() {
    int op;
    while(VistaPrincipal::menuConfiguraciones(op) != 4) {
        switch(op) {
            case 1:
                controlDbBus->menuBus();
                break;
            case 2:
                if (controlDbBus->cambiarCapacidadSegunRestriccion())
                    controlDbTiq->resetearTiquetes();
                break;
            case 3:
                controlDbRuta->menuRuta(dbEmpresa->getDbBus());
                break;
            default:
                cout << "INVALIDO";
                break;
        }
    }
}

void ControladorPrincipal::compraTiquetes() {
    controlDbTiq->insertarTiquete(dbEmpresa->getDbRuta());
}

void ControladorPrincipal::menuReportes() {
    int op;
    while(VistaPrincipal::menuReportes(op) != 4) {
        switch(op) {
            case 1:
                controlDbBus->mostrarBuses();
                break;
            case 2:
                controlDbRuta->mostrarRutas();
                break;
            case 3:
                controlDbTiq->mostrarTiquetes();
                break;
            default:
                cout << "INVALIDO";
                break;
        }
    }
}