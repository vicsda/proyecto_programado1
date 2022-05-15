cmake_minimum_required(VERSION 3.21)
project(proyecto_programado1)

set(CMAKE_CXX_STANDARD 17)

add_executable(proyecto_programado1 main.cpp include/Arreglo.h include/Asiento.h src/Asiento.cpp include/Bus.h src/Bus.cpp include/DatosBus.h src/DatosBus.cpp include/Lista.h include/Nodo.h include/Object.h include/RutaViaje.h src/RutaViaje.cpp include/Tiquete.h src/Tiquete.cpp include/Utilidades.h interfaz/VistaBus.h interfaz/VistaBus.cpp interfaz/VistaRuta.h interfaz/VistaRuta.cpp controlador/ControladorBus.h controlador/ControladorBus.cpp controlador/ControladorRuta.h controlador/ControladorRuta.cpp interfaz/VistaTiquete.cpp interfaz/VistaTiquete.h controlador/ControladorTiquete.cpp controlador/ControladorTiquete.h include/Empresa.h src/Empresa.cpp controlador/ControladorPrincipal.cpp controlador/ControladorPrincipal.h interfaz/VistaPrincipal.cpp interfaz/VistaPrincipal.h interfaz/Excepcion/Excepcion.h interfaz/Excepcion/Excepcion.cpp interfaz/Excepcion/ExcepcionRango.cpp interfaz/Excepcion/ExcepcionRango.h interfaz/Excepcion/ExcepcionChar.cpp interfaz/Excepcion/ExcepcionChar.h interfaz/Excepcion/ExcepcionArchivo.cpp interfaz/Excepcion/ExcepcionArchivo.h test/ListaTest.cpp)
