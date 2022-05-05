//
// Created by Francisco on 27/04/2022.
//

#include "../include/DatosBus.h"
int DatosBus::espacioTotal(string esp){
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