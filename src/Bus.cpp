//
// Created by Francisco on 26/04/2022.
//

#include "../include/Bus.h"

Bus::Bus(string num, string mod){
    numeroPlaca=num;
    modeloBus=mod;
    asientosAsign = new Arreglo<Asiento*>(DatosBus::espacioTotal(modeloBus), true);
}
Bus::~Bus() {}

string Bus::toString(){
    stringstream ss;
    ss<<"Bus INFO: "<<endl;
    ss<<" * Modelo bus: "<<modeloBus<<endl;
    ss<<" * Numero placa: "<<numeroPlaca<<endl;
    return ss.str();
}

string Bus::getModeloBus(){
    return modeloBus;
}
void Bus::setModeloBus(string mod){
    modeloBus=mod;
}

string Bus::getId(){
    return numeroPlaca;
}
void Bus::setId(string num){
    numeroPlaca=num;
}