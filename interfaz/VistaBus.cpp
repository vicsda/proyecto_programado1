//
// Created by David on 5/2/2022.
//

#include "VistaBus.h"

int VistaBus::menuDeBuses(int &op) {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "TIPOS DE BUSES\n";
    cout << "  1. Agregar Bus\n";
    cout << "  2. Eliminar Bus\n";
    cout << "  3. Salir\n\n";
    cout << "Ingrese aqui: ";
    cin >> op;
    return op;
}
void VistaBus::capturarDatosParaAgregarBus(string &placaBus, string &modelo) {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "AGREGAR BUS\n";
    cout << "  * Digite el numero de placa: ";
    cin >> placaBus;
    cout << "  * Digite el modelo: ";
    cin >> modelo;
}
void VistaBus::mensajeBusAgregadoExitosamente() {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "AGREGAR BUS\n";
    cout << "  -Bus agregado exitosamente-\n";
    cout << "Presione ENTER para salir: ";
    getch();
}
void VistaBus::capturarDatosParaBorrarBus(string &placaBus) {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "ELIMINAR BUS\n";
    cout << "  * Digite la placa del bus que desea eliminar: ";
    cin >> placaBus;
}
void VistaBus::mensajeBusEliminadoExitosamente() {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "ELIMINAR BUS\n";
    cout << "  -Bus eliminado exitosamente-\n";
    cout << "Presione ENTER para salir: ";
    getch();
}
void VistaBus::mensajeDeError() {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "TIPOS DE BUSES\n";
    cout << "  -Error en el proceso-\n";
    cout << "Presione ENTER para salir: ";
    getch();
}
void VistaBus::escribirBusesEnPantalla(string data) {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "BUSES REGISTRADOS\n";
    cout << data;
    cout << "\n\nPresione ENTER para salir: ";
    getch();
}


void VistaBus::capturarDatoDeRestriccion(int &op) {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "RESTRICCIONES SANITARIAS\n";
    cout << "  * Digite el nuevo porcentaje (%) de aforo deseado: ";
    cin >> op;
}
void VistaBus::mensajeDeAdvertenciaAnteCambio(char &op) {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "RESTRICCIONES SANITARIAS\n";
    cout << "  - Nota: Este cambio eliminara la actual nomina de pasajeros ingresados. Desea proceder? (S/N) -\n\n";
    cout << "Ingrese aqui: ";
    cin >> op;
}
void VistaBus::mensajeDeCambioSatisfactorio() {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "RESTRICCIONES SANITARIAS\n";
    cout << "  -Cambio realizado satisfactoriamente-\n";
    cout << "Presione ENTER para salir: ";
    getch();
}