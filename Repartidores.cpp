#include "Repartidores.h"

Repartidores::Repartidores() : Persona()
{
}
Repartidores::Repartidores(string nombre, string id, int edad, string placa,string zona,int atendidas) : Persona(nombre,id,edad)
{
    this->nombre=nombre;
    this->id=id;
    this->edad=edad;
    this->placa=placa;
    this->zona=zona;;
    this->atendidas=atendidas;
}
string Repartidores::getPlaca()
{
    return placa;
}
void Repartidores::setPlaca(string placa1)
{
    placa = placa1;
}
string Repartidores::getZona()
{
    return zona;
}
void Repartidores::setZona(string zona1)
{
    zona = zona1;
}
int Repartidores::getAtendidas()
{
    return atendidas;
}
void Repartidores::setAtendidas(int atendidas1)
{
   atendidas = atendidas1;
}
int Repartidores::ganancias()
{
    int ganacia =0;
    ganacia=(40)*this->atendidas;
    return ganacia;
}
