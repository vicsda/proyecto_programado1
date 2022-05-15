//
// Created by David on 5/3/2022.
//

#include "VistaRuta.h"

int VistaRuta::menuDeRutas(int &op) {
    while(true) {
        try {
            cout << "\tBusCar Costa Rica S.A.\n";
            cout << "RUTAS DE VIAJE\n";
            cout << "  1. Agregar ruta\n";
            cout << "  2. Eliminar ruta\n";
            cout << "  3. Salir\n\n";
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
void VistaRuta::capturarDatosParaAgregarRuta(string &idCodRuta, string &nomRuta, int &numBuses) {
    while(true) {
        try {
            cout << "\tBusCar Costa Rica S.A.\n";
            cout << "AGREGAR RUTA\n";
            cout << "  * Digite el codigo de la ruta: ";
            cin >> idCodRuta;
            cin.ignore();
            cout << "  * Digite el nombre de la ruta: ";
            getline(cin, nomRuta);
            cout << "  * Digite el numero de buses que desea agregar en su ruta: ";

            if(cin >> numBuses) {
                cout << "\n\n\n\n\n\n";
                return;
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
void VistaRuta::capturarPlacaDeBusParaRuta(string &idPlacaBus) {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "AGREGAR RUTA\n";
    cout << "  * Digite la placa de bus: ";
    cin >> idPlacaBus;
    cout << "\n\n\n\n\n\n";
}
void VistaRuta::mensajeRutaAgregadaExitosamente() {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "AGREGAR RUTA\n";
    cout << "  -Ruta agregada exitosamente-\n";
    cout << "Presione ENTER para salir: ";
    getch();
    cout << "\n\n\n\n\n\n";
}
void VistaRuta::capturarDatosParaEliminarRuta(string &idCodRuta) {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "ELIMINAR RUTA\n";
    cout << "  * Digite el ID de la ruta por eliminar: ";
    cin >> idCodRuta;
    cout << "\n\n\n\n\n\n";
}
void VistaRuta::mensajeRutaEliminadaExitosamente() {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "ELIMINAR RUTA\n";
    cout << "  -Ruta eliminada exitosamente-\n";
    cout << "Presione ENTER para salir: ";
    getch();
    cout << "\n\n\n\n\n\n";
}
void VistaRuta::mensajeDeError() {
    cout << "\n\n\n\n\n\n";
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "RUTAS DE VIAJE\n";
    cout << "  -Error en el proceso. Ingreso discorde-\n";
    cout << "Presione ENTER para salir: ";
    getch();
    cout << "\n\n\n\n\n\n";
}
void VistaRuta::escribirDisponibilidadDePasajerosPorRuta(string data) {
    cout << "\n\n\n\n\n\n";
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "DISPONIBILIDAD DE PASAJEROS POR RUTA DE VIAJE\n";
    cout << data;
    cout << "\n\nPresione ENTER para salir: ";
    getch();
    cout << "\n\n\n\n\n\n";
}