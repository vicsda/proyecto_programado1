//
// Created by David on 5/2/2022.
//

#include "../include/RutaViaje.h"

RutaViaje::RutaViaje() : idCodRuta("X"), nomRuta("X") {
    busesAsign = new Lista<Bus*>(false);
}
RutaViaje::RutaViaje(string idCodRuta, string nomRuta) : idCodRuta(idCodRuta), nomRuta(nomRuta) {
    busesAsign = new Lista<Bus*>(false);
}
RutaViaje::RutaViaje(string idCodRuta, string nomRuta, Lista<Bus*>* busesAsign)
        : idCodRuta(idCodRuta), nomRuta(nomRuta), busesAsign(busesAsign) {}

RutaViaje::~RutaViaje() {
    delete busesAsign;
}

const string &RutaViaje::getId() const {
    return idCodRuta;
}
void RutaViaje::setId(const string &idCodRuta) {
    RutaViaje::idCodRuta = idCodRuta;
}
const string &RutaViaje::getNomRuta() const {
    return nomRuta;
}
void RutaViaje::setNomRuta(const string &nomRuta) {
    RutaViaje::nomRuta = nomRuta;
}

bool RutaViaje::anadirBusEnRuta(Bus* bus) {
    return busesAsign->agregarElemento(bus);
}

Bus* RutaViaje::getPrimerBusDisponible() {
    int cont = 0;
    while(cont <= busesAsign->getCantDeElementos()) {
        Bus* busEnPos = busesAsign->getElementoEnPosEspec(cont);

        if(busEnPos == nullptr)
            return nullptr;
        else if(!busEnPos->isLleno())
            return busEnPos;

        cont++;
    }

    return nullptr;
}

double RutaViaje::getDisponibilidadDePasajeros() {
    double sumProm = 0;
    int cont = 0;
    while(cont < busesAsign->getCantDeElementos()) {
        Bus* busEnPos = busesAsign->getElementoEnPosEspec(cont);

        if(busEnPos == nullptr)
            break;
        else
            sumProm += busEnPos->getDisponibilidadDelBus();

        cont++;
    }

    return sumProm / busesAsign->getCantDeElementos();
}

bool RutaViaje::eliminarBusSegunPlaca(string placa) {
    return busesAsign->eliminarElementoSegunId(placa);
}

string RutaViaje::toString() {
    stringstream x;
    x << "* Codigo de Ruta: " << idCodRuta << '\n'
      << "* Nombre de la Ruta: " << nomRuta << '\n'
      << "* Nro. de Buses Asignados: " << busesAsign->getCantDeElementos() << '\n'
      << "* Disponibilidad de Pasajeros: " << getDisponibilidadDePasajeros() << "%";  // IMPLEMENTAR
    return x.str();
}