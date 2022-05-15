//
// Created by David on 5/2/2022.
//

#ifndef PROYECTO_1_EIF204_LISTA_H
#define PROYECTO_1_EIF204_LISTA_H

#include "Nodo.h"
#include "Tiquete.h"

/*
                                                    CLASE GENERICA - 'Lista'

  Esta es la implementacion generica de la estructura de datos tipo 'lista enlazada'. Se utiliza para salvar la mayoria de instancias cuyo
  limite de ingreso no es sabido (o simplemente "no existe").

  Esta posee una variable tipo 'bool' llamada 'Composicion'. Esta se encarga de analizar si una instancia 'x' de la lista es de agregacion
  (no se encarga de la existencia de sus objetos) o composicion (se encarga de la vida de sus objetos).

*/

template <class T>
class Lista : public Object {
private:
    Nodo<T>* cabeza;
    int cant;
    bool composicion;
public:
    Lista(bool composicion) : cabeza(nullptr), cant(0), composicion(composicion) {}
    ~Lista() {
        Nodo<T>* temp = cabeza;
        Nodo<T>* sig;
        while(temp != nullptr) {
            sig = temp->getSig();
            delete temp;
            temp = sig;
        }
    }

    int getCantDeElementos() {
        return cant;
    }

    bool checkarSiElementoExisteSegunId(string id) {
        Nodo<T>* temp = cabeza;
        while(temp != nullptr) {
            if(temp->getDatos()->getId() == id) {
                return true;
            }
            temp = temp->getSig();
        }
        return false;
    }

    T devolverElementoSegunId(string id) {
        Nodo<T>* temp = cabeza;
        while(temp != nullptr) {
            if(temp->getDatos()->getId() == id) {
                return temp->getDatos();
            }
            temp = temp->getSig();
        }
        return nullptr;
    }

    T getElementoEnPosEspec(int pos) {
        Nodo<T>* temp = cabeza;

        int cont = 0;
        while (temp != nullptr) {
            if (cont == pos)
                return temp->getDatos();
            cont++;
            temp = temp->getSig();
        }

        return nullptr;
    }

    bool agregarElemento(T nuevoElemento) {
        if(!checkarSiElementoExisteSegunId(nuevoElemento->getId()) and (nuevoElemento != nullptr)) {
            Nodo<T>* nuevoNodo = new Nodo<T>(nuevoElemento, nullptr, composicion);
            if(cabeza == nullptr) {
                cabeza = nuevoNodo;
            }
            else {
                Nodo<T>* temp = cabeza;
                while(temp->getSig() != nullptr) {
                    temp = temp->getSig();
                }
                temp->setSig(nuevoNodo);
            }
            cant++;
            return true;
        }

        return false;
    }

    bool eliminarElementoSegunId(string id) {

        if(cabeza->getDatos()->getId() == id) {
            Nodo<T>* elimCab = cabeza;
            cabeza = cabeza->getSig();
            if(composicion) {
                //delete elimCab;
            }
            cant--;
            return true;
        }

        Nodo<T>* temp = cabeza;
        while(temp->getSig() != nullptr) {
            if(temp->getSig()->getDatos()->getId() == id) {
                Nodo<T>* elimEle = temp->getSig();
                temp->setSig(temp->getSig()->getSig());
                if(composicion) {
                    // delete elimEle;
                }
                cant--;
                return true;
            }
            temp = temp->getSig();
        }

        if(temp->getDatos()->getId() == id) {
            temp = cabeza;
            while (temp->getSig()->getSig() != nullptr) {
                temp = temp->getSig();
            }
            Nodo<T>* elimFin = temp->getSig();
            temp->setSig(nullptr);
            if(composicion) {
                //  delete elimFin;
            }
            cant--;
            return true;
        }

        return false;
    }

    bool eliminarUltimoElemento() {
        Nodo<T>* temp = cabeza;

        if(temp == nullptr) {
            return false;
        }
        else if(temp->getSig() == nullptr) {
            delete temp;
            cant--;
            return true;
        }


        while(temp->getSig()->getSig() != nullptr) {
            temp = temp->getSig();
        }

        Nodo<T>* nodoPorDeletear = temp->getSig();
        delete nodoPorDeletear;
        nodoPorDeletear = nullptr;
        temp->setSig(nullptr);
        cant--;
        return true;
    }

    bool resetearLista() {
        Nodo<T>* temp = cabeza;

        if(cabeza == nullptr) { return true; }
        else if(cabeza->getSig() == nullptr) {
            delete cabeza;
            cabeza = nullptr;
            cant = 0;
            return true;
        }
        else {
            while(temp->getSig() != nullptr) {
                Nodo<T>* deleteNod = temp;
                temp = temp->getSig();
                delete deleteNod;
            }

            delete temp;
            cabeza = nullptr;
            cant = 0;
            return true;
        }
    }

    string toString() {
        stringstream x;
        Nodo<T>* temp = cabeza;
        while(temp != nullptr) {
            x << temp->getDatos()->toString();
            temp = temp->getSig();
            if(temp != nullptr) {
                x << "\n\n";
            }
        }
        return x.str();
    }
};

template <>
class Lista<Tiquete*> {
private:
    Nodo<Tiquete*>* cabeza;
    int cant;
    bool composicion;
public:
    Lista(bool composicion) : cabeza(nullptr), cant(0), composicion(composicion) {}
    ~Lista() {
        Nodo<Tiquete*>* temp = cabeza;
        Nodo<Tiquete*>* sig;
        while(temp != nullptr) {
            sig = temp->getSig();
            delete temp;
            temp = sig;
        }
    }

    int getCantDeElementos() {
        return cant;
    }

    bool checkarSiElementoExisteSegunId(string id) {
        if(cabeza == nullptr) { return false; }
        Nodo<Tiquete*>* temp = cabeza;
        while(temp != nullptr) {
            if(temp->getDatos()->getId() == id) {
                return true;
            }
            temp = temp->getSig();
        }
        return false;
    }

    Tiquete* devolverElementoSegunPos(int pos) {
        Nodo<Tiquete*>* temp = cabeza;

        int cont = 0;
        while (temp != nullptr) {
            if (cont == pos)
                return temp->getDatos();
            cont++;
            temp = temp->getSig();
        }

        return nullptr;
    }

    Tiquete* devolverElementoSegunId(string id) {
        Nodo<Tiquete*>* temp = cabeza;
        while(temp != nullptr) {
            if(temp->getDatos()->getId() == id) {
                return temp->getDatos();
            }
            temp = temp->getSig();
        }
        return nullptr;
    }

    bool agregarElemento(Tiquete* nuevoElemento) {
        if(!checkarSiElementoExisteSegunId(nuevoElemento->getId()) and (nuevoElemento != nullptr)) {
            Nodo<Tiquete*>* nuevoNodo = new Nodo<Tiquete*>(nuevoElemento, nullptr, composicion);
            if(cabeza == nullptr) {
                cabeza = nuevoNodo;
            }
            else {
                Nodo<Tiquete*>* temp = cabeza;
                while(temp->getSig() != nullptr) {
                    temp = temp->getSig();
                }
                temp->setSig(nuevoNodo);
            }
            cant++;
            return true;
        }

        return false;
    }

    bool eliminarElementoSegunId(string id) {

        if(cabeza == nullptr) { return false; }

        if(cabeza->getDatos()->getId() == id) {
            Nodo<Tiquete*>* elimCab = cabeza;
            cabeza = cabeza->getSig();
            delete elimCab;
            cant--;
            return true;
        }

        Nodo<Tiquete*>* temp = cabeza;
        while(temp->getSig() != nullptr) {
            if(temp->getSig()->getDatos()->getId() == id) {
                Nodo<Tiquete*>* elimEle = temp->getSig();
                temp->setSig(temp->getSig()->getSig());
                delete elimEle;
                cant--;
                return true;
            }
            temp = temp->getSig();
        }

        if(temp->getDatos()->getId() == id) {
            temp = cabeza;
            while (temp->getSig()->getSig() != nullptr) {
                temp = temp->getSig();
            }
            Nodo<Tiquete*>* elimFin = temp->getSig();
            temp->setSig(nullptr);
            delete elimFin;
            cant--;
            return true;
        }

        return false;
    }

    bool eliminarElementosSegunBusAsign(string placa) {
        Nodo<Tiquete*>* temp = cabeza;
        Nodo<Tiquete*>* prev = nullptr;

        while(temp != nullptr) {
            if(temp->getDatos()->getPlacaBusAsign() != placa) {
                prev = temp;
                temp = temp->getSig();
                continue;
            }

            if(prev != nullptr)
                prev->setSig(temp->getSig());
            else
                cabeza = cabeza->getSig();

            Nodo<Tiquete*>* nodElim = temp;
            temp = temp->getSig();
            delete nodElim;
        }

        return true;
    }

    bool eliminarElementosSegunCodRuta(string codRuta) {
        Nodo<Tiquete*>* temp = cabeza;
        Nodo<Tiquete*>* prev = nullptr;

        while(temp != nullptr) {
            if(temp->getDatos()->getCodRutaAsign() != codRuta) {
                prev = temp;
                temp = temp->getSig();
                continue;
            }

            if(prev != nullptr)
                prev->setSig(temp->getSig());
            else
                cabeza = cabeza->getSig();

            Nodo<Tiquete*>* nodElim = temp;
            temp = temp->getSig();
            delete nodElim;
        }

        return true;
    }

    bool eliminarUltimoElemento() {
        Nodo<Tiquete*>* temp = cabeza;

        if(temp == nullptr) {
            return false;
        }
        else if(temp->getSig() == nullptr) {
            delete temp;
            cant--;
            return true;
        }


        while(temp->getSig()->getSig() != nullptr) {
            temp = temp->getSig();
        }

        Nodo<Tiquete*>* nodoPorDeletear = temp->getSig();
        delete nodoPorDeletear;
        nodoPorDeletear = nullptr;
        temp->setSig(nullptr);
        cant--;
        return true;
    }

    bool resetearLista() {
        Nodo<Tiquete*>* temp = cabeza;

        if(cabeza == nullptr) { return true; }
        else if(cabeza->getSig() == nullptr) {
            delete cabeza;
            cabeza = nullptr;
            cant = 0;
            return true;
        }
        else {
            while(temp->getSig() != nullptr) {
                Nodo<Tiquete*>* deleteNod = temp;
                temp = temp->getSig();
                delete deleteNod;
            }

            delete temp;
            cabeza = nullptr;
            cant = 0;
            return true;
        }
    }

    string toString() {
        stringstream x;
        Nodo<Tiquete*>* temp = cabeza;
        while(temp != nullptr) {
            x << temp->getDatos()->toString();
            temp = temp->getSig();
            if(temp != nullptr) {
                x << "\n\n";
            }
        }
        return x.str();
    }
};

#endif //PROYECTO_1_EIF204_LISTA_H
