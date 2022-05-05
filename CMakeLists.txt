cmake_minimum_required(VERSION 3.21)
project(proyecto_programado1)

set(CMAKE_CXX_STANDARD 17)

add_executable(proyecto_programado1 main.cpp include/Arreglo.h include/Asiento.h src/Asiento.cpp include/Bus.h src/Bus.cpp include/DatosBus.h src/DatosBus.cpp include/Lista.h include/Nodo.h include/Object.h include/RutaViaje.h src/RutaViaje.cpp include/Tiquete.h src/Tiquete.cpp include/Utilidades.h interfaz/VistaBus.h interfaz/VistaBus.cpp interfaz/VistaRuta.h interfaz/VistaRuta.cpp controlador/ControladorBus.h controlador/ControladorBus.cpp controlador/ControladorRuta.h controlador/ControladorRuta.cpp)
