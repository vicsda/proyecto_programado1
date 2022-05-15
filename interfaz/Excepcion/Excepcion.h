//
// Created by Daniela Madrigal on 10/5/2022.
//

#ifndef PROYECTO_PROGRAMADO1_EXCEPCION_H
#define PROYECTO_PROGRAMADO1_EXCEPCION_H
#include "../../include/Utilidades.h"

class Excepcion: public exception{
public:
    //mensajes
    virtual const char * what();
};

#endif //PROYECTO_PROGRAMADO1_EXCEPCION_H
