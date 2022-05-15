#include "controlador/ControladorPrincipal.h"

/*
                                                    MAIN DEL SISTEMA

                    Nota I: Las clases y archivos mas "interesantes" poseen una breve descripcion en sus .h/.cpp

*/

int main() {

    ControladorPrincipal* cont1 = new ControladorPrincipal(true);
    cont1->menuPrincipal();
    delete cont1;

    return 0;
}