//
// Created by David on 5/2/2022.
//

#include "VistaBus.h"

int VistaBus::menuDeBuses(int &op) {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "TIPOS DE BUSES\n";
    cout << "  1. Agregar Bus\n";
    cout << "  2. Eliminar Bus\n";
    cout << "  3. Salir\n\n";
    cout << "Ingrese aqui: ";
    cin >> op;
    cout << "\n\n\n\n\n\n";
    return op;
}
void VistaBus::capturarDatosParaAgregarBus(string &placaBus, string &modelo) {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "AGREGAR BUS\n";
    cout << "  * Digite el numero de placa: ";
    cin >> placaBus;
    cout << "  * Digite el modelo: ";
    cin >> modelo;
    cout << "\n\n\n\n\n\n";
}
void VistaBus::mensajeBusAgregadoExitosamente() {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "AGREGAR BUS\n";
    cout << "  -Bus agregado exitosamente-\n";
    cout << "Presione ENTER para salir: ";
    getch();
    cout << "\n\n\n\n\n\n";
}
void VistaBus::capturarDatosParaBorrarBus(string &placaBus) {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "ELIMINAR BUS\n";
    cout << "  * Digite la placa del bus que desea eliminar: ";
    cin >> placaBus;
    cout << "\n\n\n\n\n\n";
}
void VistaBus::mensajeBusEliminadoExitosamente() {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "ELIMINAR BUS\n";
    cout << "  -Bus eliminado exitosamente-\n";
    cout << "Presione ENTER para salir: ";
    getch();
    cout << "\n\n\n\n\n\n";
}
void VistaBus::mensajeDeError() {
    cout << "\n\n\n\n\n\n";
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "TIPOS DE BUSES\n";
    cout << "  -Error en el proceso-\n";
    cout << "Presione ENTER para salir: ";
    getch();
    cout << "\n\n\n\n\n\n";
}
void VistaBus::escribirBusesEnPantalla(string data) {
    cout << "\n\n\n\n\n\n";
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "BUSES REGISTRADOS\n";
    cout << data;
    cout << "\n\nPresione ENTER para salir: ";
    getch();
    cout << "\n\n\n\n\n\n";
}


void VistaBus::capturarDatoDeRestriccion(int &op) {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "RESTRICCIONES SANITARIAS\n";
    cout << "  * Digite el nuevo porcentaje (%) de aforo deseado: ";
    cin >> op;
    cout << "\n\n\n\n\n\n";
}
void VistaBus::mensajeDeAdvertenciaAnteCambio(char &op) {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "RESTRICCIONES SANITARIAS\n";
    cout << "  - Nota: Este cambio eliminara la actual nomina de pasajeros ingresados. Desea proceder? (S/N) -\n\n";
    cout << "Ingrese aqui: ";
    cin >> op;
    cout << "\n\n\n\n\n\n";
}
void VistaBus::mensajeDeCambioSatisfactorio() {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "RESTRICCIONES SANITARIAS\n";
    cout << "  -Cambio realizado satisfactoriamente-\n";
    cout << "Presione ENTER para salir: ";
    getch();
    cout << "\n\n\n\n\n\n";
}