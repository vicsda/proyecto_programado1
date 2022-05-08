//
// Created by Daniela Madrigal on 5/5/2022.
//

#include "ControladorTiquete.h"


ControladorTiquete::ControladorTiquete() {
    dbTiquete = new Lista<Tiquete*>(true);
}
ControladorTiquete::ControladorTiquete(Lista<Tiquete *> *dbTiquete) : dbTiquete(dbTiquete){}

ControladorTiquete::~ControladorTiquete() {
    delete dbTiquete;
}

void ControladorTiquete::control0(Lista<RutaViaje*>* dbRuta) {
    int op = 0;
    while(VistaTiquete::menuTiquetes(op) != 4) {
        switch(op) {
            case 1:
                control1(dbRuta);
                break;
            case 2:
               control2();
                break;
            case 3:
                control3();
                break;
            case 4:
                break;
            default:
                "INVALIDO";
                break;
        }
    }
}

void ControladorTiquete::control1(Lista<RutaViaje *> *dbRuta) {
    string cedulaComprador;
    string codigoRuta;
    int cantidadPasajeros;
    string numTiquete;

    cout << " * RUTAS A ESCOGER \n";
    cout << dbRuta->toString() << endl;
    VistaTiquete::capturaDatosDelCliente(cedulaComprador, cantidadPasajeros, codigoRuta);
    VistaTiquete::capturaNumTiquete(numTiquete);
    if (dbRuta->checkarSiElementoExisteSegunId(codigoRuta) && !dbTiquete->checkarSiElementoExisteSegunId(numTiquete)) {

        RutaViaje *puntRuta = dbRuta->devolverElementoSegunId(codigoRuta);
        Bus *puntBus = puntRuta->getPrimerBus();

        if (puntBus != nullptr) {
            while (cantidadPasajeros) {
                puntBus->agregaAsientos();
                Tiquete *tiq = new Tiquete(numTiquete, cedulaComprador, puntBus, puntRuta);
                dbTiquete->agregarElemento(tiq);

                if (puntBus->isLleno()) {
                    puntBus = puntRuta->getPrimerBus();

                    if (puntBus == nullptr) {
                        return;
                    }
                }

                numTiquete.append("g");
                cantidadPasajeros--;
            }

            VistaTiquete::mensajeReservaExitosa();
            cout << endl;
        } else {
            return;
        }
    }

}

void ControladorTiquete::control2() {
    string numTiquete;
    VistaTiquete::capturarDatosParaEliminarTiquete(numTiquete);
    if ( dbTiquete->eliminarElementoSegunId(numTiquete) ) {
        VistaTiquete::mensajeReservaEliminadaExitosamente();
    }
}
void ControladorTiquete::control3() {
    string data = dbTiquete->toString();
    VistaTiquete::escribirDatosDeTiquetes(data);
}