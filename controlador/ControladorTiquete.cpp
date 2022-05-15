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

void ControladorTiquete::insertarTiquete(Empresa* dbEmpresa) {
    string codRuta;
    string numCedula;
    int cantBoletos;

    //se piden los datos del usuario
    VistaTiquete::capturarDatosParaAgregarTiquete(codRuta, numCedula, cantBoletos);

    //algoritmo para compra de tiquetes
    if(dbEmpresa->checkarSiRutaExisteSegunCod(codRuta)) {
        //inicio la insercion de los boletos, uno por uno
        int tempCantBoletos = cantBoletos;
        while(tempCantBoletos) {

            //consigo los objetos necesarios para la transaccion
            RutaViaje* rutaAsign = dbEmpresa->devolverRutaSegunCodigo(codRuta);
            Bus* busAsign = rutaAsign->getPrimerBusDisponible();

            //terminar proceso si busAsign es nullptr (no hay buses disponibles)
            if(busAsign == nullptr) { VistaTiquete::mensajeDeError(); return; }

            //saco datos de los objetos necesarios, con el fin de realizar la transaccion
            int numAsiento = busAsign->getCantDeAsientos()+1;
            string placaBus = busAsign->getId();

            //creo el asiento y el tiquete por ser agregados al sistema
            Asiento* nuevoAsiento = new Asiento(numAsiento, false);
            Tiquete* nuevoTiquete = new Tiquete(numAsiento,numCedula,placaBus,codRuta);

            //agrego los elementos respectivos
            busAsign->agregarAsiento(nuevoAsiento);
            dbTiquete->agregarElemento(nuevoTiquete);

            //si el bus actual ya se lleno, conseguir el siguiente. si ya no hay mas disponibles, terminar proceso
            if(busAsign->isLleno()) {
                Bus* nuevoBusAsign = rutaAsign->getPrimerBusDisponible();
                if(nuevoBusAsign == nullptr) {

                    //algoritmo para remover y deletear tiquetes ingresados en el proceso. al finalizar, terminar el proceso
                    while (tempCantBoletos <= cantBoletos) {
                        busAsign->eliminarUltimoAsiento();
                        dbTiquete->eliminarUltimoElemento();
                        tempCantBoletos++;
                    }

                    VistaTiquete::mensajeDeError();
                    return;
                }
            }

            tempCantBoletos--;
        }

        Archivos<Lista<Tiquete*>>::guardarDatosDeLista(dbTiquete, "listaTiquetes.txt");
        VistaTiquete::mensajeDeCompraRealizadaExitosamente();
    } else {
        VistaTiquete::mensajeDeError();
    }
}
void ControladorTiquete::mostrarTiquetes() {
    string data = dbTiquete->toString();
    VistaTiquete::escribirDatosDeTiquetes(data);
}
void ControladorTiquete::resetearTiquetes() {
    dbTiquete->resetearLista();
}