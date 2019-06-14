#include "Ordenes.h"
#include "Clientes.h"
#include "Negocios.h"
#include "Repartidores.h"
#include "Productos.h"
Ordenes::Ordenes()
{
}
Ordenes::Ordenes(Clientes *cliente, Negocios *negocio, Repartidores *repartidor, Productos* producto,string tipo, string proceso)
{
    this->cliente = cliente;
    this->negocio = negocio;
    this->repartidor = repartidor;
    this->producto=producto;
    this->tipo = tipo;
    this->proceso = proceso;
}
Clientes *Ordenes::getCliente()
{
    return cliente;
}
void Ordenes::setCliente(Clientes *cliente1)
{
    cliente = cliente1;
}
Negocios *Ordenes::getNegocio()
{
    return negocio;
}
void Ordenes::setNegocio(Negocios *negocio1)
{
    negocio = negocio1;
}
Repartidores *Ordenes::getRepartidor()
{
    return repartidor;
}
void Ordenes::setRepartidor(Repartidores *repartidor1)
{
    repartidor = repartidor1;
}
string Ordenes::getTipo()
{
    return tipo;
}
void Ordenes::setTipo(string tipo1)
{
    tipo = tipo1;
}
string Ordenes::getProceso()
{
    return proceso;
}
void Ordenes::setProceso(string proceso1)
{
    proceso = proceso1;
}
Productos* Ordenes::getProducto()
{
    return producto;
}
void Ordenes::setProducto(Productos* producto1)
{
    producto = producto;
}
