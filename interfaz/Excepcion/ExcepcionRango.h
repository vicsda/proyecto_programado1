//
// Created by Daniela Madrigal on 14/5/2022.
//

#ifndef PROYECTO_PROGRAMADO1_EXCEPCIONRANGO_H
#define PROYECTO_PROGRAMADO1_EXCEPCIONRANGO_H
#include "Excepcion.h"

class ExcepcionRango : public Excepcion{
public:
    const char * what();
    static bool excepcionRestricion(int &porcentaje);
};


#endif //PROYECTO_PROGRAMADO1_EXCEPCIONRANGO_H
