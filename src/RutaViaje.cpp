//
// Created by David on 5/2/2022.
//

#include "../include/RutaViaje.h"

RutaViaje::RutaViaje(const string &codRuta, const string &nombreRuta)
    : codRuta(codRuta), nombreRuta(nombreRuta) {
    busAsignados = new Lista<Bus*>(false);
}

RutaViaje::~RutaViaje() {

}

const string &RutaViaje::getNombreRuta() const {
    return nombreRuta;
}

void RutaViaje::setNombreRuta(const string &nombreRuta) {
    RutaViaje::nombreRuta = nombreRuta;
}


std::string RutaViaje::toString() {
    std::stringstream s;
    s<<"Ruta INFO: "<<endl;
    s<<"Nombre de la Ruta: "<<getNombreRuta()<<std::endl;
    s<<"---Buses para ruta---"<<std::endl;
    s<< getBusAsignados()->toString();
    return s.str();
}

const string &RutaViaje::getId() const {
    return codRuta;
}

void RutaViaje::setId(const string &codRuta) {
    RutaViaje::codRuta = codRuta;
}

Lista<Bus *> *RutaViaje::getBusAsignados() const {
    return busAsignados;
}

void RutaViaje::setBusAsignados(Lista<Bus *> *busAsignados) {
    RutaViaje::busAsignados = busAsignados;
}

bool RutaViaje::anadirBusEnRuta(Bus *nuevoBus) {
    return busAsignados->agregarElemento(nuevoBus);
}