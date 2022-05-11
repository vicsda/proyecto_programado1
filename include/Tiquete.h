//
// Created by Francisco on 26/04/2022.
//

#ifndef PROYECTO_1_EIF204_TIQUETE_H
#define PROYECTO_1_EIF204_TIQUETE_H
#include "Object.h"
#include "Utilidades.h"

class Tiquete : public Object {
private:
    static int id_actual;

    string idTiquete;
    int numAsiento;
    string cedulaComprador;
    string placaBusAsign;
    string codRutaAsign;
public:
    Tiquete();
    Tiquete(int numAsiento, const string &cedulaComprador, const string &placaBusAsign,
            const string &codRutaAsign);
    virtual ~Tiquete();

    const string &getId() const;
    void setId(string &idTiquete);
    const int &getNumAsiento() const;
    void setNumAsiento(const int &numAsiento);
    const string &getCedulaComprador() const;
    void setCedulaComprador(const string &cedulaComprador);
    const string &getPlacaBusAsign() const;
    void setPlacaBusAsign(const string &placaBusAsign);
    const string &getCodRutaAsign() const;
    void setCodRutaAsign(const string &codRutaAsign);

    string toString();
};

#endif //PROYECTO_1_EIF204_TIQUETE_H