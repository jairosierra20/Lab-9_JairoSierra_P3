#include "Empleados.h"

Empleados::Empleados() : Persona()
{
}
Empleados::Empleados(string nombre, string id, int edad, string horas,string local,int ordenes) : Persona(nombre,id,edad)
{
    this->nombre=nombre;
    this->id=id;
    this->edad=edad;
    this->horas=horas;
    this->local=local;
    this->ordenes=ordenes;
}
string Empleados::getHoras()
{
    return horas;
}
void Empleados::setHoras(string horas1)
{
    horas = horas1;
}
string Empleados::getLocal()
{
    return local;
}
void Empleados::setLocal(string local1)
{
    local = local1;
}
int Empleados::getOrdenes()
{
    return ordenes;
}
void Empleados::setOrdenes(int ordenes1)
{
   ordenes = ordenes1;
}
int Empleados::ganancias()
{
    int ganacia =0;
    ganacia=(30)*(this->ordenes+this->ordenes);
    return ganacia;
}
