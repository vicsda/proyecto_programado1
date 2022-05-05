//
// Created by Daniela Madrigal on 21/4/2022.
//

#include "../include/Asiento.h"

Asiento::Asiento(int numAsiento, bool disponibilidad) : numAsiento(numAsiento), disponibilidad(disponibilidad) {}

int Asiento::getNumAsiento() const {
    return numAsiento;
}

void Asiento::setNumAsiento(int numAsiento) {
    Asiento::numAsiento = numAsiento;
}

bool Asiento::isDisponibilidad() const {
    return disponibilidad;
}

void Asiento::setDisponibilidad(bool disponibilidad) {
    Asiento::disponibilidad = disponibilidad;
}

std::string Asiento::toString() {
    stringstream s;
    s << " * Numero de Asiento: " << numAsiento << '\n'
    << " * Disponibilidad: " << disponibilidad;
    return s.str();
}