//
// Created by Francisco on 27/04/2022.
//

#include "../include/DatosBus.h"
int DatosBus::getCapacidadMaxima(string esp) {
    if(esp == "Buseta") {
        return 40;
    }
    else if(esp == "Coaster") {
        return 27;
    }
    else if(esp == "Hiace") {
        return 12;
    }
    else if(esp == "H1") {
        return 6;
    }
    else {
        return 0;
    }
}

bool DatosBus::isModeloValido(string inModelo) {
    if(inModelo == "Buseta" || inModelo == "Coaster" || inModelo == "Hiace" || inModelo == "H1") {
        return true;
    }

    return false;
}

int DatosBus::realizarCalculoAforo(int porc, string modelo) {
    int tamMax = DatosBus::getCapacidadMaxima(modelo);
    return porc * tamMax / 100;
}