//
// Created by David on 5/2/2022.
//

#include "ControladorBus.h"

ControladorBus::ControladorBus() {
    dbBus = new Lista<Bus*>(true);
}
ControladorBus::ControladorBus(Lista<Bus*>* dbBus)
        : dbBus(dbBus) {}
ControladorBus::~ControladorBus() {}

void ControladorBus::menuBus(Empresa* dbEmpresa) {
    int op = 0;
    while(VistaBus::menuDeBuses(op) != 3) {
        switch(op) {
            case 1:
                insertarBus();
                break;
            case 2:
                eliminarBus(dbEmpresa);
                break;
            default:
                VistaBus::mensajeDeError();
                break;
        }
    }
}
void ControladorBus::insertarBus() {   // BUSCAR FORMA DE HACER QUE NO PERMITA INGRESAR "MODELOS INVALIDOS"
    string idNumPlaca;
    string modelo;
    VistaBus::capturarDatosParaAgregarBus(idNumPlaca, modelo);
    Bus* nuevoBus = new Bus(idNumPlaca, modelo);
    if( DatosBus::isModeloValido(modelo) ) {
        dbBus->agregarElemento(nuevoBus);
        Archivos<Lista<Bus*>>::guardarDatosDeLista(dbBus, "listaBuses.txt");
        VistaBus::mensajeBusAgregadoExitosamente();
    }
    else {
        delete nuevoBus;
        VistaBus::mensajeDeError();
    }
}
void ControladorBus::eliminarBus(Empresa* dbEmpresa) {
    string idNumPlaca;
    VistaBus::capturarDatosParaBorrarBus(idNumPlaca);

    //checkar que el bus realmente existe en la base de datos de buses
    if(dbBus->checkarSiElementoExisteSegunId(idNumPlaca)) {

        //eliminar referencias del objeto, si las hay, en la base de datos de rutas
        dbEmpresa->eliminarRutasConInstDeBus(idNumPlaca);

        //eliminar tiquetes inscritos con ese numero de placa
        dbEmpresa->eliminarTiquetesConInstDeBus(idNumPlaca);

        //eliminar objeto de la base de datos de buses
        dbBus->eliminarElementoSegunId(idNumPlaca);
        Archivos<Lista<Bus*>>::guardarDatosDeLista(dbBus, "listaBuses.txt");

        VistaBus::mensajeBusEliminadoExitosamente();
    } else {
        VistaBus::mensajeDeError();
    }
}
bool ControladorBus::cambiarCapacidadSegunRestriccion() {
    int restriccionDeseada;
    char op;

    //le pido los datos deseados al usuario. le aviso que esto eliminara la nomina actual
    VistaBus::capturarDatoDeRestriccion(restriccionDeseada);
    VistaBus::mensajeDeAdvertenciaAnteCambio(op);

    //si el usuario accedio, entonces proceder
    if(op == 'S' || op == 's') {

        //reseteo de los asientos (con nuevo valor de tamano)
        for(int i = 0; i < dbBus->getCantDeElementos(); i++) {
            Bus* busPos = dbBus->getElementoEnPosEspec(i);
            busPos->resetearAsientosSegunRestriccion(restriccionDeseada);
        }

        VistaBus::mensajeDeCambioSatisfactorio();
        return true;
    } else {
        VistaBus::mensajeDeError();
    }

    return false;
}
void ControladorBus::mostrarBuses() {
    string data = dbBus->toString();
    VistaBus::escribirBusesEnPantalla(data);
}