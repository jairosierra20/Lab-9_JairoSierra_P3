#include "Negocios.h"
#include "Productos.h"
#include <vector>
using std::vector;
Negocios::Negocios()
{
}
Negocios::Negocios(string nombre, string ubicacion, int locales,vector<Productos*> productos)
{
    this->nombre = nombre;
    this->ubicacion = ubicacion;
    this->locales = locales;
    this->productos=productos;
}
string Negocios::getNombre()
{
    return nombre;
}
void Negocios::setNombre(string nombre1)
{
    nombre = nombre1;
}
string Negocios::getUbicacion()
{
    return ubicacion;
}
void Negocios::setUbicacion(string ubicacion1)
{
    ubicacion = ubicacion1;
}
int Negocios::getLocales()
{
    return locales;
}
void Negocios::setLocales(int locales1)
{
    locales = locales1;
}
vector<Productos*> Negocios::getProductos(){
    return productos;
}
void Negocios::setProductos(vector<Productos*> productos){
    productos=productos;
}
