//
// Created by Daniela Madrigal on 5/5/2022.
//

#ifndef PROYECTO_PROGRAMADO1_CONTROLADORTIQUETE_H
#define PROYECTO_PROGRAMADO1_CONTROLADORTIQUETE_H
#include "../interfaz/VistaTiquete.h"
#include "../include/Archivos.h"
#include "../include/Empresa.h"

class ControladorTiquete {
private:
    Lista<Tiquete*>* dbTiquete;
public:
    ControladorTiquete();
    ControladorTiquete(Lista<Tiquete*>* dbTiquete);
    virtual ~ControladorTiquete();
    void insertarTiquete(Empresa* dbEmpresa);
    void mostrarTiquetes();
    void resetearTiquetes();
};


#endif //PROYECTO_PROGRAMADO1_CONTROLADORTIQUETE_H
