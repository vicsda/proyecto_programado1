#include <iostream>
#include "controlador/ControladorRuta.h"

int main() {
    Lista<Bus*>* dbBuses = new Lista<Bus*>(true);
    Bus* bus1 = new Bus("JUH345", "H1");
    dbBuses->agregarElemento(bus1);
    ControladorRuta* cont1 = new ControladorRuta();
    cont1->control0(dbBuses);
    return 0;
}
