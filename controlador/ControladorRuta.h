//
// Created by David on 5/3/2022.
//

#ifndef PROYECTO_1_EIF204_CONTROLADORRUTA_H
#define PROYECTO_1_EIF204_CONTROLADORRUTA_H

#include "../interfaz/VistaRuta.h"
#include "../include/Empresa.h"

class ControladorRuta {
private:
    Lista<RutaViaje*>* dbRuta;
public:
    ControladorRuta();
    ControladorRuta(Lista<RutaViaje*>* dbRuta);
    ~ControladorRuta();

    void menuRuta(Empresa* dbEmpresa);
    void insertarRuta(Empresa* dbEmpresa);
    void eliminarRuta(Empresa* dbEmpresa);
    void mostrarRutas();
};

#endif //PROYECTO_1_EIF204_CONTROLADORRUTA_H
