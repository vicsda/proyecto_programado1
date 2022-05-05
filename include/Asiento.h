//
// Created by Daniela Madrigal on 21/4/2022.
//

#ifndef PROYECTO_1_EIF204_ASIENTO_H
#define PROYECTO_1_EIF204_ASIENTO_H

#include "Object.h"
#include "Utilidades.h"

class Asiento : public Object {
private:
    int numAsiento;
    bool disponibilidad;
public:
    Asiento(int numAsiento = 0, bool disponibilidad = false);
    int getNumAsiento() const;
    void setNumAsiento(int numAsiento);
    bool isDisponibilidad() const;
    void setDisponibilidad(bool disponibilidad);
    std::string toString();
};


#endif //PROYECTO_1_EIF204_ASIENTO_H
