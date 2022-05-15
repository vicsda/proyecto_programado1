//
// Created by Daniela Madrigal on 14/5/2022.
//

#include "ExcepcionRango.h"

const char *ExcepcionRango::what() {
    return "\tBusCar Costa Rica S.A.\nEXCEPCIONES\n  -Error en el proceso-\nPresione ENTER para salir: ";
}

bool ExcepcionRango::excepcionRestricion(int &porcentaje) {
    int porcentajeMaximo = 100;
    if (porcentaje > porcentajeMaximo){
        throw ExcepcionRango();
    }else{
        return false;
    }
}