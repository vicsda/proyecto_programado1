//
// Created by Daniela Madrigal on 5/5/2022.
//

#include "VistaTiquete.h"

void VistaTiquete::capturarDatosParaAgregarTiquete(string &codRutaAsign, string &cedulaDeComprador, int &cantidadTiquetes) {
    while(true) {
        try {
            cout << "\tBusCar Costa Rica S.A.\n";
            cout << "RESERVAR TIQUETE\n";
            cout << "  * Digite el codigo de la ruta deseada: ";
            cin >> codRutaAsign;
            cout << "  * Digite su cedula: ";
            cin >> cedulaDeComprador;
            cout << "  * Digite la cantidad de tiquetes que desea comprar: ";

            if(cin >> cantidadTiquetes) {
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
void VistaTiquete::mensajeDeCompraRealizadaExitosamente() {
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "RESERVAR TIQUETE\n";
    cout << "  -Compra realizada exitosamente-\n";
    cout << "Presione ENTER para salir: ";
    getch();
    cout << "\n\n\n\n\n\n";
}
void VistaTiquete::mensajeDeError() {
    cout << "\n\n\n\n\n\n";
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "RESERVAR TIQUETE\n";
    cout << "  -Error en el proceso. Ingreso discorde-\n";
    cout << "Presione ENTER para salir: ";
    getch();
    cout << "\n\n\n\n\n\n";
}
void VistaTiquete::escribirDatosDeTiquetes(string data) {
    cout << "\n\n\n\n\n\n";
    cout << "\tBusCar Costa Rica S.A.\n";
    cout << "TIQUETES REGISTRADOS\n";
    cout << data;
    cout << "\n\nPresione ENTER para salir: ";
    getch();
    cout << "\n\n\n\n\n\n";
}