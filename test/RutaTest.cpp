//
// Created by David on 5/15/2022.
//

#include "../include/Utilidades.h"
#include "../include/Lista.h"
#include "../include/RutaViaje.h"
#include <assert.h>

/*
                                         PSEUDO-IMPLEMENTACION DE UNIT TESTING (CLASE 'Bus')

  Se hace una pseudo-simulacion del unit-testing comun en algunos de los metodos de la clase 'Bus'. Se hace con un fin
  didactico.

*/

Bus* busTest = new Bus("1", "Buseta");

void testConexionConModeloDeBus() {
    assert(busTest->getCapacidadMaxima() == 40);
}
void testAgregadoDeAsientos() {
    if(busTest->getCantDeAsientos() == busTest->getCapacidadMaxima()) {
        busTest->eliminarUltimoAsiento();
    }
    assert(busTest->agregarAsiento(new Asiento()));
}
void testEliminarAsiento() {
    if(busTest->getCantDeAsientos() == 0) {
        busTest->agregarAsiento(new Asiento());
    }
    assert(busTest->eliminarUltimoAsiento());
}
void testIsLleno() {
    for(int i = 0; i < busTest->getCapacidadMaxima(); i++) {
        busTest->agregarAsiento(new Asiento());
    }
    assert(busTest->isLleno());
    for(int i = 0; i < busTest->getCapacidadMaxima(); i++) {
        busTest->eliminarUltimoAsiento();
    }
}