//
// Created by David on 5/3/2022.
//

#include "VistaRuta.h"

int VistaRuta::menuDeRutas(int &op) {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "RUTAS DE VIAJE\n";
    cout << "  1. Agregar ruta\n";
    cout << "  2. Eliminar ruta\n";
    cout << "  3. Salir\n\n";
    cout << "Ingrese aqui: ";
    cin >> op;
    return op;
}
void VistaRuta::capturarDatosParaAgregarRuta(string &idCodRuta, string &nomRuta, int &numBuses) {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "AGREGAR RUTA\n";
    cout << "  * Digite el codigo de la ruta: ";
    cin >> idCodRuta;
    cin.ignore();
    cout << "  * Digite el nombre de la ruta: ";
    getline(cin, nomRuta);
    cout << "  * Digite el numero de buses que desea agregar en su ruta: ";
    cin >> numBuses;
}
void VistaRuta::capturarPlacaDeBusParaRuta(string &idPlacaBus) {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "AGREGAR RUTA\n";
    cout << "  * Digite la placa de bus: ";
    cin >> idPlacaBus;
}
void VistaRuta::mensajeRutaAgregadaExitosamente() {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "AGREGAR RUTA\n";
    cout << "  -Ruta agregada exitosamente-\n";
    cout << "Presione ENTER para salir: ";
    getch();
}
void VistaRuta::capturarDatosParaEliminarRuta(string &idCodRuta) {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "ELIMINAR RUTA\n";
    cout << "  * Digite el ID de la ruta por eliminar: ";
    cin >> idCodRuta;
}
void VistaRuta::mensajeRutaEliminadaExitosamente() {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "ELIMINAR RUTA\n";
    cout << "  -Ruta eliminada exitosamente-\n";
    cout << "Presione ENTER para salir: ";
    getch();
}
void VistaRuta::mensajeDeError() {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "RUTAS DE VIAJE\n";
    cout << "  -Error en el proceso-\n";
    cout << "Presione ENTER para salir: ";
    getch();
}
void VistaRuta::escribirDisponibilidadDePasajerosPorRuta(string data) {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "DISPONIBILIDAD DE PASAJEROS POR RUTA DE VIAJE\n";
    cout << data;
    cout << "\n\nPresione ENTER para salir: ";
    getch();
}