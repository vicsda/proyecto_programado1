//
// Created by Daniela Madrigal on 10/5/2022.
//

#ifndef PROYECTO_PROGRAMADO1_EXCEPCION_H
#define PROYECTO_PROGRAMADO1_EXCEPCION_H
#include "../include/Utilidades.h"

class Excepciones: public exception{
public:
    //mensajes
    const char * what ();
    const char * whatModel();
    const char * whatValor();
    const char * whatString();
    const char * whatArchivo();

    //validaciones
    static void excepcionMenu(int &op);
    static void excepcionMenuPrincipal(int &op);
    static void excepcionRestricionSN(char &op);
    static bool excepcionRestricionPorcentaje(int &porcentaje);
    static void excepcionModelo(string &modelo);
};

#endif //PROYECTO_PROGRAMADO1_EXCEPCION_H
