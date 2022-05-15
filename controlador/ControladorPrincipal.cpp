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
ControladorPrincipal::ControladorPrincipal(bool prueba) {
    if(prueba) {

        // 1. Buses del sistema
        Bus* bus1 = new Bus("BUS001", "Buseta");
        Bus* bus2 = new Bus("BUS002", "Buseta");
        Bus* bus3 = new Bus("BUS003", "Buseta");
        Bus* bus4 = new Bus("COA001", "Coaster");
        Bus* bus5 = new Bus("COA002", "Coaster");
        Bus* bus6 = new Bus("HIA001", "Hiace");
        Bus* bus7 = new Bus("HIA002", "Hiace");
        Bus* bus8 = new Bus("HIA003", "Hiace");
        Bus* bus9 = new Bus("HIA004", "Hiace");
        Bus* bus10 = new Bus("HON001", "H1");
        Bus* bus11 = new Bus("HON002", "H1");
        Lista<Bus*>* dbBus = new Lista<Bus*>(true);
        dbBus->agregarElemento(bus1);
        dbBus->agregarElemento(bus2);
        dbBus->agregarElemento(bus3);
        dbBus->agregarElemento(bus4);
        dbBus->agregarElemento(bus5);
        dbBus->agregarElemento(bus6);
        dbBus->agregarElemento(bus7);
        dbBus->agregarElemento(bus8);
        dbBus->agregarElemento(bus9);
        dbBus->agregarElemento(bus10);
        dbBus->agregarElemento(bus11);

        // 1.1 Empaquetar buses en listas, para ser insertados en las rutas
        Lista<Bus*>* busRut1 = new Lista<Bus*>(false);
        busRut1->agregarElemento(bus1);
        busRut1->agregarElemento(bus2);
        busRut1->agregarElemento(bus3);
        Lista<Bus*>* busRut2 = new Lista<Bus*>(false);
        busRut2->agregarElemento(bus4);
        busRut2->agregarElemento(bus5);
        Lista<Bus*>* busRut3 = new Lista<Bus*>(false);
        busRut3->agregarElemento(bus6);
        busRut3->agregarElemento(bus7);
        Lista<Bus*>* busRut4 = new Lista<Bus*>(false);
        busRut4->agregarElemento(bus8);
        busRut4->agregarElemento(bus9);
        Lista<Bus*>* busRut5 = new Lista<Bus*>(false);
        busRut5->agregarElemento(bus10);
        Lista<Bus*>* busRut6 = new Lista<Bus*>(false);
        busRut6->agregarElemento(bus11);

        // 2. Rutas del sistema
        RutaViaje* ruta1 = new RutaViaje("VA01", "Volcan Arenal - San Carlos", busRut1);
        RutaViaje* ruta2 = new RutaViaje("RC02", "Rio Celeste - San Carlos", busRut2);
        RutaViaje* ruta3 = new RutaViaje("TM87", "Tamarindo - Guanacaste", busRut3);
        RutaViaje* ruta4 = new RutaViaje("PV56", "Puerto Viejo - Limon", busRut4);
        RutaViaje* ruta5 = new RutaViaje("CO66", "Cobano - Puntarenas", busRut5);
        RutaViaje* ruta6 = new RutaViaje("VI11", "Volcan Irazu - Cartago", busRut6);
        Lista<RutaViaje*>* dbRuta = new Lista<RutaViaje*>(true);
        dbRuta->agregarElemento(ruta1);
        dbRuta->agregarElemento(ruta2);
        dbRuta->agregarElemento(ruta3);
        dbRuta->agregarElemento(ruta4);
        dbRuta->agregarElemento(ruta5);
        dbRuta->agregarElemento(ruta6);

        // 3. Tiquetes del sistema
        Lista<Tiquete*>* dbTiquete = new Lista<Tiquete*>(true);

        // 4. Creacion de la database de la empresa
        Empresa* tempDbEmpresa = new Empresa(dbBus, dbRuta, dbTiquete);

        // 5. Asignacion de los elementos
        this->dbEmpresa = tempDbEmpresa;
        controlDbBus = new ControladorBus(dbEmpresa->getDbBus());
        controlDbRuta = new ControladorRuta(dbEmpresa->getDbRuta());
        controlDbTiq = new ControladorTiquete(dbEmpresa->getDbTiquete());

    }
    else {

        dbEmpresa = nullptr;
        controlDbBus = nullptr;
        controlDbRuta = nullptr;
        controlDbTiq = nullptr;

    }
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
                VistaPrincipal::mensajeDeError();
                break;
        }
    }
}

void ControladorPrincipal::menuConfiguraciones() {
    int op;
    while(VistaPrincipal::menuConfiguraciones(op) != 4) {
        switch(op) {
            case 1:
                controlDbBus->menuBus(dbEmpresa);
                break;
            case 2:
                if (controlDbBus->cambiarCapacidadSegunRestriccion())
                    controlDbTiq->resetearTiquetes();
                break;
            case 3:
                controlDbRuta->menuRuta(dbEmpresa);
                break;
            default:
                VistaPrincipal::mensajeDeError();
                break;
        }
    }
}

void ControladorPrincipal::compraTiquetes() {
    controlDbTiq->insertarTiquete(dbEmpresa);
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
                VistaPrincipal::mensajeDeError();
                break;
        }
    }
}