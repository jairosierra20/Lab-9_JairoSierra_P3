#include "Persona.h"
#ifndef REPARTIDORES_H
#define REPARTIDORES_H
class Repartidores : public Persona
{
public:
    string placa;
    string zona;
    int atendidas;
    Repartidores();
    Repartidores(string, string, int, string, string, int);
    string getPlaca();
    void setPlaca(string);
    string getZona();
    void setZona(string);
    int getAtendidas();
    void setAtendidas(int);
    virtual int ganancias();
};
#endif