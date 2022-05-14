//
// Created by Francisco on 26/04/2022.
//

#ifndef PROYECTO_1_EIF204_BUS_H
#define PROYECTO_1_EIF204_BUS_H

#include "Asiento.h"
#include "Arreglo.h"
#include "DatosBus.h"

class Bus : public Object {
private:
    string idNumPlaca;
    string modelo;
    Arreglo<Asiento*>* asientosAsign;
public:
    Bus();
    Bus(const string &idNumPlaca, const string &modelo);
    Bus(const string &idNumPlaca, const string &modelo, Arreglo<Asiento *> *asientosAsign);
    virtual ~Bus();

    const string &getId() const;
    void setId(const string &idNumPlaca);
    const string &getModelo() const;
    void setModelo(const string &modelo);

    int getCapacidadMaxima();
    int getCantDeAsientos();
    double getDisponibilidadDelBus();
    bool agregarAsiento(Asiento* inAsiento);
    bool eliminarUltimoAsiento();
    bool resetearAsientosSegunRestriccion(int porc);
    bool isLleno();

    string toString();
};

#endif //PROYECTO_1_EIF204_BUS_H
