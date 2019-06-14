#include "Productos.h"
Productos::Productos()
{
}
Productos::Productos(string nombre, string tipo)
{
    this->nombre = nombre;
    this->tipo = tipo;
}
string Productos::getNombre()
{
    return nombre;
}
void Productos::setNombre(string nombre1)
{
    nombre = nombre1;
}
string Productos::getTipo()
{
    return tipo;
}
void Productos::setTipo(string tipo1)
{
    tipo = tipo1;
}
