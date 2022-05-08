//
// Created by Daniela Madrigal on 5/5/2022.
//

#include "VistaTiquete.h"


int VistaTiquete::menuTiquetes(int &op) {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "RESERVA TIQUETES\n";
    cout << "  1. Agregar Tiquete\n";
    cout << "  2. Eliminar Tiquete\n";
    cout << "  3. Mostrar tiquetes del sistema\n";
    cout << "  4. Salir\n\n";
    cout << "Ingrese aqui: ";
    cin >> op;
    return op;
}

void VistaTiquete::capturaDatosDelCliente(string &cedulaComprador, int &cantidadPasajeros, string &codigoRuta) {
    cantidadPasajeros = 0;
    cout <<"INGRESA DATOS DEL CLIENTE \n";
    cout<<" * Digite cedula de comprador: ";
    cin>>cedulaComprador;
    cout<<" * Digite cantidad de tiquetes a comprar: ";
    cin>>cantidadPasajeros;
    cout<<" * Digite el codigo de la ruta deseada: ";
    cin>>codigoRuta;
}

void VistaTiquete::capturaNumTiquete(string &numTiquete) {
    cout<<"Ingrese numero tiquete: ";
    cin>>numTiquete;
}

void VistaTiquete::mensajeReservaExitosa() {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "RESERVA TIQUETE\n";
    cout << " - Reserva agregada exitosamente - ";
}

void VistaTiquete::capturarDatosParaEliminarTiquete(string &numTiquete) {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "ELIMINAR TIQUETE\n";
    cout << " * Digite el numero de tiquete del bus que desea eliminar: ";
    cin >> numTiquete;
}

void VistaTiquete::mensajeReservaEliminadaExitosamente() {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "ELIMINAR TIQUETE\n";
    cout << "  -Tiquete eliminado exitosamente-";
}
void VistaTiquete::escribirDatosDeTiquetes(string data) {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "RESERVAS REGISTRADAS\n";
    cout << data;
}
