//
// Created by David on 5/8/2022.
//

#include "VistaPrincipal.h"

int VistaPrincipal::menuPrincipal(int &op) {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "MENU PRINCIPAL\n";
    cout << "  1. Configuracion de la flota\n";
    cout << "  2. Reserva de tiquetes\n";
    cout << "  3. Reportes\n";
    cout << "  4. Salir\n\n";
    cout << "Ingrese aqui: ";
    cin >> op;
    return op;
}
int VistaPrincipal::menuConfiguraciones(int &op) {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "MENU DE CONFIGURACIONES\n";
    cout << "  1. Tipos de Buses\n";
    cout << "  2. Restricciones Sanitarias\n";
    cout << "  3. Rutas de Viaje\n";
    cout << "  4. Salir\n\n";
    cout << "Ingrese aqui: ";
    cin >> op;
    return op;
}
int VistaPrincipal::menuReportes(int &op) {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "MENU DE REPORTES\n";
    cout << "  1. Mostrar los buses registrados\n";
    cout << "  2. Mostrar la disponibilidad de pasajeros por ruta de viaje\n";
    cout << "  3. Mostrar los tiquetes emitidos\n";
    cout << "  4. Salir\n\n";
    cout << "Ingrese aqui: ";
    cin >> op;
    return op;
}