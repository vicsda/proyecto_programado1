//
// Created by Daniela Madrigal on 14/5/2022.
//

#include "ExcepcionChar.h"

const char *ExcepcionChar::what() {
    return "\tBusCar Costa Rica S.A.\nEXCEPCIONES\n  -Error en el proceso al ingresar caracter-\nPresione ENTER para salir: ";
}

void ExcepcionChar::excepcionRestricionSN(char &op) {
    if(op != 'n' && op != 'N' && op != 'S' && op != 's'){
        throw ExcepcionChar();
    }
}