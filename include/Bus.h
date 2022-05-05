//
// Created by Francisco on 26/04/2022.
//

#ifndef PROYECTO_1_EIF204_BUS_H
#define PROYECTO_1_EIF204_BUS_H

#include "Object.h"
#include "Utilidades.h"
#include "Arreglo.h"
#include "Asiento.h"
#include "DatosBus.h"

class Bus : public Object{
private:
    string numeroPlaca;
    string modeloBus;
    Arreglo<Asiento*>* asientosAsign;
public:
    Bus(string=" ",string=" ");
    ~Bus();
    string getModeloBus();
    void setModeloBus(string);
    string getId();
    void setId(string);
    string toString();
};

#endif //PROYECTO_1_EIF204_BUS_H
