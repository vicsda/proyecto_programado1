//
// Created by Daniela Madrigal on 5/5/2022.
//

#ifndef PROYECTO_PROGRAMADO1_CONTROLADORTIQUETE_H
#define PROYECTO_PROGRAMADO1_CONTROLADORTIQUETE_H
#include "../include/Tiquete.h"
#include "../include/Lista.h"
#include "../interfaz/VistaTiquete.h"

class ControladorTiquete {
private:
    Lista<Tiquete*>* dbTiquete;
public:
    ControladorTiquete();
    ControladorTiquete(Lista<Tiquete*> *dbTiquete);
    ~ControladorTiquete();

    void control0(Lista<RutaViaje*>* dbRuta);
    void control1(Lista<RutaViaje*>* dbRuta);
    void control2();
    void control3();
};


#endif //PROYECTO_PROGRAMADO1_CONTROLADORTIQUETE_H
