//
// Created by Daniela Madrigal on 5/5/2022.
//

#include "VistaTiquete.h"

void VistaTiquete::capturarDatosParaAgregarTiquete(string &codRutaAsign, string &cedulaDeComprador, int &cantidadTiquetes) {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "RESERVAR TIQUETE\n";
    cout << "  * Digite el codigo de la ruta deseada: ";
    cin >> codRutaAsign;
    cout << "  * Digite su cedula: ";
    cin >> cedulaDeComprador;
    cout << "  * Digite la cantidad de tiquetes que desea comprar: ";
    cin >> cantidadTiquetes;
}
void VistaTiquete::mensajeDeCompraRealizadaExitosamente() {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "RESERVAR TIQUETE\n";
    cout << "  -Compra realizada exitosamente-\n";
    cout << "Presione ENTER para salir: ";
    getch();
}
void VistaTiquete::mensajeDeError() {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "RESERVAR TIQUETE\n";
    cout << "  -Error en el proceso-\n";
    cout << "Presione ENTER para salir: ";
    getch();
}
void VistaTiquete::escribirDatosDeTiquetes(string data) {
    system("CLS");
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "TIQUETES REGISTRADOS\n";
    cout << data;
    cout << "\n\nPresione ENTER para salir: ";
    getch();
}