#include "Persona.h"
Persona::Persona()
{
}
Persona::Persona(string nombre, string id, int edad)
{
    this->nombre = nombre;
    this->id = id;
    this->edad = edad;
}
string Persona::getNombre()
{
    return nombre;
}
void Persona::setNombre(string nombre)
{
    nombre = nombre;
}
string Persona::getId()
{
    return id;
}
void Persona::setId(string id)
{
    id = id;
}
int Persona::getEdad()
{
    return edad;
}
void Persona::setEdad(int edad)
{
    edad = edad;
}
int Persona::ganancias()
{
}