#ifndef ORDENES_H
#define ORDENES_H
#include "Clientes.h"
#include "Negocios.h"
#include "Repartidores.h"
#include "Productos.h"
#include <string>
using std::string;
class Ordenes
{
public:
    Clientes *cliente;
    Negocios *negocio;
    Repartidores *repartidor;
    Productos* producto;
    string tipo;
    string proceso;
    Ordenes();
    Ordenes(Clientes *, Negocios *, Repartidores *,Productos*, string, string);
    Clientes *getCliente();
    void setCliente(Clientes *);
    Negocios *getNegocio();
    void setNegocio(Negocios *);
    Repartidores *getRepartidor();
    void setRepartidor(Repartidores *);
    Productos*getProducto();
    void setProducto(Productos *);
    string getTipo();
    void setTipo(string);
    string getProceso();
    void setProceso(string);
};
#endif