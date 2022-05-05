//
// Created by David on 5/2/2022.
//

#include "VistaBus.h"

int VistaBus::menuBuses(int &op) {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "MENU DE BUSES\n";
    cout << " 1. Agregar Bus\n";
    cout << " 2. Eliminar Bus\n";
    cout << " 3. Mostrar Buses del Sistema\n";
    cout << " 4. Salir\n\n";
    cout << "Ingrese aqui: ";
    cin >> op;
    return op;
}
void VistaBus::capturarDatosParaAgregarBus(string &placaBus, string &modelo) {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "AGREGAR BUS\n";
    cout << " * Digite el numero de placa: ";
    cin >> placaBus;
    cout << " * Digite el modelo: ";
    cin >> modelo;
}
void VistaBus::mensajeBusAgregadoExitosamente() {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "AGREGAR BUS\n";
    cout << " - Bus agregado exitosamente - ";
}
void VistaBus::capturarDatosParaBorrarBus(string &placaBus) {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "ELIMINAR BUS\n";
    cout << " * Digite el numero de placa del bus que desea eliminar: ";
    cin >> placaBus;
}
void VistaBus::mensajeBusEliminadoExitosamente() {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "AGREGAR BUS\n";
    cout << " - Bus eliminado exitosamente - ";
}
void VistaBus::escribirDatosDeBuses(string &data) {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "BUSES REGISTRADOS\n";
    cout << data;
}