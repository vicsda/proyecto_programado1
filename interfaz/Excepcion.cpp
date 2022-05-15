//
// Created by Daniela Madrigal on 10/5/2022.
//

#include "Excepcion.h"

//mensajes
const char *Excepciones::what() {
    return "OPCION INVALIDA\n";
}

const char *Excepciones::whatModel() {
    return "MODELO INCORRECTO. (H1, COASTER, HIACE, BUSETA)\n";
}

const char *Excepciones::whatValor() {
    return "\tBusCar Costa Rica S.A.\nEXCEPCIONES\n  -Error en el proceso-\nPresione ENTER para salir: ";
}

const char *Excepciones::whatString() {
    return "Lo digitado no es un string.\n";
}

const char *Excepciones::whatArchivo() {
    return "No se pudo abrir archivo. \n";
}

//validaciones
void Excepciones::excepcionMenu(int &op) {
    int opcionLimite = 3;
    if(op > opcionLimite) {
        throw Excepciones();
    }
}
void Excepciones::excepcionMenuPrincipal(int &op) {
    int opcionLimite = 4;
    if(op > opcionLimite) {
        throw Excepciones();
    }
}
void Excepciones::excepcionRestricionSN(char &op) {
    if(op != 'n' && op != 'N' && op != 'S' && op != 's'){
        throw Excepciones();
    }
}

bool Excepciones::excepcionRestricionPorcentaje(int &porcentaje) {
    int porcentajeMaximo = 100;
    if (porcentaje > porcentajeMaximo){
        throw Excepciones();
    }else{
        return false;
    }
}

void Excepciones::excepcionModelo(string &modelo) {
    if(modelo != "Buseta" && modelo !="Coaster" && modelo != "Hiace" && modelo != "h1" &&
       modelo != "BUSETA" && modelo != "COASTER" && modelo != "HIACE" && modelo != "H1"&&
       modelo != "buseta" && modelo != "coaster" && modelo != "hiace") {

        throw Excepciones();
    }
}