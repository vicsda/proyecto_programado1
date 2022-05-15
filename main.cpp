#include <iostream>
#include "controlador/ControladorPrincipal.h"

/*
                                                    MAIN DEL SISTEMA

*/

int main() {

    ControladorPrincipal* cont1 = new ControladorPrincipal(true);
    cont1->menuPrincipal();
    delete cont1;

    return 0;
}