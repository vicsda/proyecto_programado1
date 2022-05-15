#include <iostream>
#include "controlador/ControladorPrincipal.h"

/*
                                        ----- COSAS POR HACER -----

* DEBUG

    -> Debuggear el proyecto. Buscar errores

*/


int main() {

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
    Empresa* dbEmpresa = new Empresa(dbBus, dbRuta, dbTiquete);

    // 5. Control principal
    ControladorPrincipal* cont1 = new ControladorPrincipal(dbEmpresa);
    cont1->menuPrincipal();
    delete cont1;

    /*
    // BASE DE DATOS DE BUSES PRINCIPAL
    Lista<Bus*>* dbBus = new Lista<Bus*>(true);
    Bus* bus1 = new Bus("HRO333", "H1");
    Bus* bus2 = new Bus("LEO666", "H1");
    Bus* bus3 = new Bus("ANA444", "H1");
    Bus* bus4 = new Bus("REI999", "H1");
    Bus* bus5 = new Bus("OLO999", "H1");
    Bus* bus6 = new Bus("NIN111", "H1");
    dbBus->agregarElemento(bus1);
    dbBus->agregarElemento(bus2);
    dbBus->agregarElemento(bus3);
    dbBus->agregarElemento(bus4);
    dbBus->agregarElemento(bus5);
    dbBus->agregarElemento(bus6);

    //LISTAS DE BUSES ASIGNADOS PARA LAS RUTAS POR CREAR
    Lista<Bus*>* busAsignRu1 = new Lista<Bus*>(false);
    Lista<Bus*>* busAsignRu2 = new Lista<Bus*>(false);
    busAsignRu1->agregarElemento(bus1);
    busAsignRu1->agregarElemento(bus2);
    busAsignRu1->agregarElemento(bus3);
    busAsignRu2->agregarElemento(bus4);
    busAsignRu2->agregarElemento(bus5);
    busAsignRu2->agregarElemento(bus6);

    //BASE DE DATOS DE RUTAS PRINCIPAL
    Lista<RutaViaje*>* dbRuta = new Lista<RutaViaje*>(true);
    RutaViaje* rut1 = new RutaViaje("SJ222", "San Jose - Tibas", busAsignRu1);
    RutaViaje* rut2 = new RutaViaje("HR999", "Heredia - Guarari", busAsignRu2);
    dbRuta->agregarElemento(rut1);
    dbRuta->agregarElemento(rut2);

    //BASE DE DATOS DE TIQUETES
    Lista<Tiquete*>* dbTiquete = new Lista<Tiquete*>(true);

    //BASE DE DATOS EMPRESA
    Empresa* dbEmpresa = new Empresa(dbBus, dbRuta, dbTiquete);

    ControladorPrincipal* cont = new ControladorPrincipal(dbEmpresa);
    cont->menuPrincipal();
    delete cont;
    */

    return 0;
}