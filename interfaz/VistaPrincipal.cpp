//
// Created by David on 5/8/2022.
//

#include "VistaPrincipal.h"
#include "Excepcion.h"

int VistaPrincipal::menuPrincipal(int &op) {
    while(true) {
        try {
            cout << "\tBusCar Costa Rica S.A.\n";
            cout << "MENU PRINCIPAL\n";
            cout << "  1. Configuracion de la flota\n";
            cout << "  2. Reserva de tiquetes\n";
            cout << "  3. Reportes\n";
            cout << "  4. Salir\n\n";
            cout << "Ingrese aqui: ";

            if(cin >> op) {
                cout << "\n\n\n\n\n\n";
                return op;
            }
            else {
                throw Excepciones();
            }
        }
        catch(Excepciones& e) {
            cout << "\n\n\n\n\n\n";
            cout << e.whatValor();
            getch();
            cin.clear();
            cin.ignore(256, '\n');
            cout << "\n\n\n\n\n\n";
        }
    }
}
int VistaPrincipal::menuConfiguraciones(int &op) {
    while(true) {
        try {
            cout << "\tBusCar Costa Rica S.A.\n";
            cout << "MENU DE CONFIGURACIONES\n";
            cout << "  1. Tipos de Buses\n";
            cout << "  2. Restricciones Sanitarias\n";
            cout << "  3. Rutas de Viaje\n";
            cout << "  4. Salir\n\n";
            cout << "Ingrese aqui: ";

            if(cin >> op) {
                cout << "\n\n\n\n\n\n";
                return op;
            }
            else {
                throw Excepciones();
            }
        }
        catch(Excepciones& e) {
            cout << "\n\n\n\n\n\n";
            cout << e.whatValor();
            getch();
            cin.clear();
            cin.ignore(256, '\n');
            cout << "\n\n\n\n\n\n";
        }
    }
}
int VistaPrincipal::menuReportes(int &op) {
    while(true) {
        try {
            cout << "\tBusCar Costa Rica S.A.\n";
            cout << "MENU DE REPORTES\n";
            cout << "  1. Mostrar los buses registrados\n";
            cout << "  2. Mostrar la disponibilidad de pasajeros por ruta de viaje\n";
            cout << "  3. Mostrar los tiquetes emitidos\n";
            cout << "  4. Salir\n\n";
            cout << "Ingrese aqui: ";

            if(cin >> op) {
                cout << "\n\n\n\n\n\n";
                return op;
            }
            else {
                throw Excepciones();
            }
        }
        catch(Excepciones& e) {
            cout << "\n\n\n\n\n\n";
            cout << e.whatValor();
            getch();
            cin.clear();
            cin.ignore(256, '\n');
            cout << "\n\n\n\n\n\n";
        }
    }
}
void VistaPrincipal::mensajeDeError() {
    cout << "\n\n\n\n\n\n";
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "MENU PRINCIPAL\n";
    cout << "  -Error en el Proceso. Ingreso discorde-\n";
    cout << "Presione ENTER para salir: ";
    getch();
    cout << "\n\n\n\n\n\n";
}