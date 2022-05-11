//
// Created by Francisco on 26/04/2022.
//

#include "../include/Tiquete.h"

int Tiquete::id_actual = 1000;

Tiquete::Tiquete() : idTiquete(0), numAsiento(0), cedulaComprador("X"), placaBusAsign("X"), codRutaAsign("X") {}
Tiquete::Tiquete(int numAsiento, const string &cedulaComprador, const string &placaBusAsign, const string &codRutaAsign)
        : idTiquete(to_string(id_actual++)), numAsiento(numAsiento),cedulaComprador(cedulaComprador), placaBusAsign(placaBusAsign), codRutaAsign(codRutaAsign) {}
Tiquete::~Tiquete() {

}

const string &Tiquete::getId() const {
    return idTiquete;
}
void Tiquete::setId(string &idTiquete) {
    Tiquete::idTiquete = idTiquete;
}
const int &Tiquete::getNumAsiento() const {
    return numAsiento;
}
void Tiquete::setNumAsiento(const int &numAsiento) {
    Tiquete::numAsiento = numAsiento;
}
const string &Tiquete::getCedulaComprador() const {
    return cedulaComprador;
}
void Tiquete::setCedulaComprador(const string &cedulaComprador) {
    Tiquete::cedulaComprador = cedulaComprador;
}
const string &Tiquete::getPlacaBusAsign() const {
    return placaBusAsign;
}
void Tiquete::setPlacaBusAsign(const string &placaBusAsign) {
    Tiquete::placaBusAsign = placaBusAsign;
}
const string &Tiquete::getCodRutaAsign() const {
    return codRutaAsign;
}
void Tiquete::setCodRutaAsign(const string &codRutaAsign) {
    Tiquete::codRutaAsign = codRutaAsign;
}

string Tiquete::toString() {
    stringstream x;
    x << "* ID de Tiquete: " << idTiquete << '\n'
      << "* Numero de Asiento: " << numAsiento << '\n'
      << "* Cedula de Comprador: " << cedulaComprador << '\n'
      << "* Placa de Bus Asignado: " << placaBusAsign << '\n'
      << "* Codigo de Ruta Asignado: " << codRutaAsign;
    return x.str();
}
