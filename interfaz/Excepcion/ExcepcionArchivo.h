//
// Created by Daniela Madrigal on 14/5/2022.
//

#ifndef PROYECTO_PROGRAMADO1_EXCEPCIONARCHIVO_H
#define PROYECTO_PROGRAMADO1_EXCEPCIONARCHIVO_H
#include "Excepcion.h"

class ExcepcionArchivo : public Excepcion{
public:
    const char * whatArchivo();
};


#endif //PROYECTO_PROGRAMADO1_EXCEPCIONARCHIVO_H
