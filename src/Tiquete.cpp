//
// Created by Francisco on 26/04/2022.
//

#include"../include/Tiquete.h"

int Tiquete::id_actual = 1000;

Tiquete::Tiquete(int numAsiento, string cedulaComprador,Bus* busAsignado,RutaViaje* rutaAsignado)
    : idTiquete(to_string(id_actual++)), numAsiento(numAsiento), cedulaComprador(cedulaComprador), busAsignado(busAsignado),
      rutaAsignado(rutaAsignado) {}

Tiquete::~Tiquete() {}


string Tiquete::getId(){
    return idTiquete;
}
int Tiquete::getNumAsiento() const {
    return numAsiento;
}
string Tiquete::getCedulaComprador(){
    return cedulaComprador;
}
Bus* Tiquete::getBus(){
    return busAsignado;
}
RutaViaje* Tiquete::getViaje(){
    return rutaAsignado;
}

void Tiquete::setId(string num){
    idTiquete=num;
}
void Tiquete::setNumAsiento(int numAsiento) {
    Tiquete::numAsiento = numAsiento;
}
void Tiquete::setCedulaComprador(string ced){
    cedulaComprador=ced;
}
void Tiquete::setBus(Bus* b){
    busAsignado=b;
}
void Tiquete::setRuta(RutaViaje* rut){
    rutaAsignado=rut;
}

string Tiquete::toString(){
    stringstream x;
    x << "* ID de Tiquete: " << idTiquete << '\n'
    << "* Numero de Asiento: " << numAsiento << '\n'
    << "* Cedula de Comprador: " << cedulaComprador << '\n'
    << "* Placa de Bus Asignado: " << busAsignado->getId() << '\n'
    << "* Codigo de Ruta Asignado: " << rutaAsignado->getId();
    return x.str();
}
