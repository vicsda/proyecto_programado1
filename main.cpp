#include "controlador/ControladorPrincipal.h"

/*
                                            EIF204 - PROYECTO PROGRAMADO #1

      Integrantes:

    - Victor Coto Solano (3-0544-0064)
    - Francisco Esteban Arias Sanabria (1-1746-0586)
    - Daniela Madrigal Morales (1-1753-0126)

*/

/*
                                                      MAIN DEL SISTEMA

                    Nota I: Las clases y archivos mas "interesantes" poseen una breve descripcion en sus .h/.cpp

                    Nota II: El sistema ya posee elementos por defecto (Los especificados por el enunciado). Estos
                    son elaborados por un constructor "especial" de testing en la clase 'ControlPrincipal'. Los datos
                    de estos pueden ser accesidos en el codigo desde este mismo constructor "especial", o en el apartado
                    de 'Reportes' en el programa.

                    Nota III: Cuando se mencione en la interfaz "Oprima ENTER para continuar" a veces requerira que se
                    oprima dos veces. Creemos que son problemas de compatibilidad entre CLion y la funcion getch() de
                    <conio.h>. Sin embargo esto no es muy frecuente, ni tampoco afecta en la experiencia del programa de forma
                    importante.

*/

int main() {

    ControladorPrincipal* cont1 = new ControladorPrincipal(true);
    cont1->menuPrincipal();
    delete cont1;

    return 0;
}