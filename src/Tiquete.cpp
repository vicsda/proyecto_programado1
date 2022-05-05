//
// Created by Francisco on 26/04/2022.
//

#include"../include/Tiquete.h"


Tiquete::Tiquete(string numT,string cedC,Bus* b,RutaViaje* rut){
    numeroTiquete=numT;
    cedulaComprador=cedC;
    busAsignado=b;
    rutaAsignado=rut;
}
Tiquete::~Tiquete(){

}

string Tiquete::getId(){
    return numeroTiquete;
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
    numeroTiquete=num;
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
    stringstream ss;
    ss<<"Ruta INFO: "<<endl;
    ss<<"Num tiquete: "<<numeroTiquete<<endl;
    ss<<"Cedula comprador: "<<cedulaComprador<<endl;
    ss<<"Bus Asignado: "<<busAsignado->toString()<<endl;
    ss<<"Ruta Asignado: "<<rutaAsignado->toString();
    return ss.str();
}