//
// Created by Daniela Madrigal on 10/5/2022.
//

#ifndef PROYECTO_PROGRAMADO1_EXCEPCION_H
#define PROYECTO_PROGRAMADO1_EXCEPCION_H
#include "../../include/Utilidades.h"

/*
                                                    MANEJO DE EXCEPCIONES

    Manejo basico de las excepciones. Esta representa la clase base Excepcion, y de esta heredan otros tipos de errores especificos

*/

class Excepcion: public exception{
public:
    //mensajes
    virtual const char * what();
};

#endif //PROYECTO_PROGRAMADO1_EXCEPCION_H
