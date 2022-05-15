//
// Created by Daniela Madrigal on 14/5/2022.
//

#ifndef PROYECTO_PROGRAMADO1_EXCEPCIONCHAR_H
#define PROYECTO_PROGRAMADO1_EXCEPCIONCHAR_H
#include "Excepcion.h"

class ExcepcionChar :public Excepcion{
public:
    const char * what();
    static void excepcionRestricionSN(char &op);
};


#endif //PROYECTO_PROGRAMADO1_EXCEPCIONCHAR_H
