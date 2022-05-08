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
    stringstream s;
    s<<"Ruta INFO: "<<endl;
    s<<"Nombre de la Ruta: "<<getNombreRuta()<<endl;
    s<<"Codigo de la Ruta: "<<getId()<<endl;
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


Bus *RutaViaje::getPrimerBus() {
    int cont = 0;
    while(cont < busAsignados->getCantDeElementos()){
        Bus *busEnPos = busAsignados->getElementoEnPosEspec(cont);
        if(busEnPos == nullptr){
            return nullptr;
        }else if (!busEnPos->isLleno()){
            return busEnPos;
        }
        cont ++;
    }
    return nullptr;
}
bool RutaViaje::anadirBusEnRuta(Bus *nuevoBus) {
    return busAsignados->agregarElemento(nuevoBus);
}
