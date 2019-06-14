#include "Clientes.h"

Clientes::Clientes() : Persona()
{
}
Clientes::Clientes(string nombre, string id, int edad, string direccion,string telefono,string tarjeta,int pedidos) : Persona(nombre,id,edad)
{
    this->nombre=nombre;
    this->id=id;
    this->edad=edad;
    this->direccion=direccion;
    this->telefono=telefono;
    this->tarjeta=tarjeta;
    this->pedidos=pedidos;
}
string Clientes::getDireccion()
{
    return direccion;
}
void Clientes::setDireccion(string direccion1)
{
    direccion = direccion1;
}
string Clientes::getTelefono()
{
    return telefono;
}
void Clientes::setTelefono(string telefono1)
{
    telefono = telefono1;
}
string Clientes::getTarjeta()
{
    return tarjeta;
}
void Clientes::setTarjeta(string tarjeta1)
{
    tarjeta = tarjeta1;
}
int Clientes::getPedidos()
{
    return pedidos;
}
void Clientes::setPedidos(int pedidos1)
{
    pedidos = pedidos1;
}
int Clientes::ganancias()
{
    int ganacia =0;
    ganacia=(-100)*this->pedidos;
    return ganacia;
}
