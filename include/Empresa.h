//
// Created by David on 5/8/2022.
//

#ifndef PROYECTO_PROGRAMADO1_EMPRESA_H
#define PROYECTO_PROGRAMADO1_EMPRESA_H

#include "Bus.h"
#include "RutaViaje.h"
#include "Tiquete.h"

/*
                                                    CLASE EMPRESA

  Esta clase nace de nuestra necesidad por conectar todas las listas (sub db's) en un solo punto. Sirve como el puente entre
  las listas y las sub-controladoras.

  Esta tambien posee ciertos metodos para manejar relaciones entre sub-controladoras que considerabamos importantes.

*/

class Empresa {
private:
    Lista<Bus*>* dbBus;
    Lista<RutaViaje*>* dbRuta;
    Lista<Tiquete*>* dbTiquete;
public:
    Empresa();
    Empresa(Lista<Bus*>* dbBus, Lista<RutaViaje*>* dbRuta, Lista<Tiquete*>* dbTiquete);
    ~Empresa();
    Lista<Bus*>* getDbBus();
    Lista<RutaViaje*>* getDbRuta();
    Lista<Tiquete*>* getDbTiquete();

    //conexiones con bus
    Bus* devolverBusSegunPlaca(string placa);

    //conexiones con ruta
    RutaViaje* devolverRutaSegunCodigo(string codRuta);
    void eliminarRutasConInstDeBus(string placa);
    bool checkarSiRutaExisteSegunCod(string codRuta);

    //conexiones con tiquete
    void eliminarTiquetesConInstDeBus(string placa);
    void eliminarTiquetesConInstDeRuta(string codRuta);
};

#endif //PROYECTO_PROGRAMADO1_EMPRESA_H
