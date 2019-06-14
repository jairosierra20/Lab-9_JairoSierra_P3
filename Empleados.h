#include "Persona.h"
#ifndef EMPLEADOS_H
#define EMPLEADOS_H
class Empleados : public Persona
{
public:
    string horas;
    string local;
    int ordenes;
    Empleados();
    Empleados(string, string, int, string, string, int);
    string getHoras();
    void setHoras(string);
    string getLocal();
    void setLocal(string);
    int getOrdenes();
    void setOrdenes(int);
    virtual int ganancias();
};
#endif