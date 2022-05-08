#include <iostream>
#include "controlador/ControladorRuta.h"
#include "controlador/ControladorTiquete.h"


int main() {
    Lista<Bus*>* dbBuses = new Lista<Bus*>(true);
    Bus* bus1 = new Bus("JUH345", "H1");
    Bus* bus2 = new Bus("JUI684", "H1");
    Bus* bus3 = new Bus("SP9687", "Coaster");

    dbBuses->agregarElemento(bus1);
    dbBuses->agregarElemento(bus2);

    RutaViaje *rut = new RutaViaje("2","Tamarindo- San Jose");
    RutaViaje *rut1 = new RutaViaje("3", "San Jose - Heredia");
    rut->anadirBusEnRuta(bus1);
    rut->anadirBusEnRuta(bus2);
    rut1->anadirBusEnRuta(bus3);


    Lista<RutaViaje*> *dbRuta = new Lista<RutaViaje*>(true);
    dbRuta->agregarElemento(rut);
    dbRuta->agregarElemento(rut1);


    ControladorTiquete *cont1 = new ControladorTiquete();
    cont1->control0(dbRuta);





    /*ControladorRuta* cont1 = new ControladorRuta();
    cont1->control0(dbBuses);*/
    return 0;
}
