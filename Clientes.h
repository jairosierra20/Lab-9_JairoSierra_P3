#include "Persona.h"
#ifndef CLIENTES_H
#define CLIENTES_H
class Clientes : public Persona
{
public:
    string direccion;
    string telefono;
    string tarjeta;
    int pedidos;
    Clientes();
    Clientes(string, string, int, string, string, string, int);
    string getDireccion();
    void setDireccion(string);
    string getTelefono();
    void setTelefono(string);
    string getTarjeta();
    void setTarjeta(string);
    int getPedidos();
    void setPedidos(int);
    virtual int ganancias();
};
#endif