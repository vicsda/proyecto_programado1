#include <iostream>
#include "controlador/ControladorPrincipal.h"

/*
                                        ----- COSAS POR HACER -----

* DEBUG

    -> Debuggear el proyecto. Buscar errores

*/


int main() {

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

    return 0;
}