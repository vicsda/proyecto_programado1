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
    string idCodRuta;
    string nomRuta;
    Lista<Bus*>* busesAsign;
public:
    RutaViaje();
    RutaViaje(string idCodRuta, string nomRuta);
    RutaViaje(string idCodRuta, string nomRuta, Lista<Bus*>* busesAsign);
    ~RutaViaje();

    const string &getId() const;
    void setId(const string &idCodRuta);
    const string &getNomRuta() const;
    void setNomRuta(const string &nomRuta);

    bool anadirBusEnRuta(Bus* bus);
    Bus* getPrimerBusDisponible();
    bool eliminarBusSegunPlaca(string placa);

    string toString();
};

#endif //PROYECTO_1_EIF204_RUTAVIAJE_H
