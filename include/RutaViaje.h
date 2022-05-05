//
// Created by Francisco on 26/04/2022.
//

#ifndef PROYECTO_1_EIF204_RUTAVIAJE_H
#define PROYECTO_1_EIF204_RUTAVIAJE_H

#include "Object.h"
#include "Bus.h"
#include "Utilidades.h"
#include "Lista.h"

class RutaViaje : public Object {
private:
    string codRuta;
    string nombreRuta;
    Lista<Bus*>* busAsignados;
public:
    RutaViaje(const string &codRuta, const string &nombreRuta);
    ~RutaViaje();

    const string &getId() const;
    void setId(const string &codRuta);
    const string &getNombreRuta() const;
    void setNombreRuta(const string &nombreRuta);
    Lista<Bus *> *getBusAsignados() const;
    void setBusAsignados(Lista<Bus *> *busAsignados);

    bool anadirBusEnRuta(Bus* nuevoBus);

    //Metodos
    string toString();
};

#endif //PROYECTO_1_EIF204_RUTAVIAJE_H
