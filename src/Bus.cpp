//
// Created by Francisco on 26/04/2022.
//

#include "../include/Bus.h"

Bus::Bus() : idNumPlaca("X"), modelo("X") {
    asientosAsign = new Arreglo<Asiento*>(DatosBus::getCapacidadMaxima(modelo), true);
}
Bus::Bus(const string &idNumPlaca, const string &modelo) : idNumPlaca(idNumPlaca), modelo(modelo) {
    asientosAsign = new Arreglo<Asiento*>(DatosBus::getCapacidadMaxima(modelo), true);
}
Bus::Bus(const string &idNumPlaca, const string &modelo, Arreglo<Asiento *> *asientosAsign)
        : idNumPlaca(idNumPlaca), modelo(modelo), asientosAsign(asientosAsign) {}
Bus::~Bus() {
    delete asientosAsign;
}

const string &Bus::getId() const {
    return idNumPlaca;
}
void Bus::setId(const string &idNumPlaca) {
    Bus::idNumPlaca = idNumPlaca;
}
const string &Bus::getModelo() const {
    return modelo;
}
void Bus::setModelo(const string &modelo) {
    Bus::modelo = modelo;
}

int Bus::getCapacidadMaxima() {
    return DatosBus::getCapacidadMaxima(modelo);
}
int Bus::getCantDeAsientos() {
    return asientosAsign->getCantDeElementos();
}
bool Bus::agregarAsiento(Asiento* inAsiento) {
    return asientosAsign->agregarElemento(inAsiento);
}
bool Bus::eliminarUltimoAsiento() {
    return asientosAsign->eliminarUltimoElemento();
}
bool Bus::resetearAsientosSegunRestriccion(int porc) {
    int nuevoTam = DatosBus::realizarCalculoAforo(porc, modelo);
    return asientosAsign->resetearContenedor(nuevoTam);
}
bool Bus::isLleno() {
    return asientosAsign->getCantDeElementos() >= asientosAsign->getTamVector();
}

string Bus::toString() {
    stringstream x;
    x << "* Numero de Placa: " << idNumPlaca << '\n'
      << "* Modelo: " << modelo << '\n'
      << "* Asientos Maximos: " << asientosAsign->getTamVector() << '\n'
      << "* Asientos Ocupados: " << asientosAsign->getCantDeElementos();
    return x.str();
}