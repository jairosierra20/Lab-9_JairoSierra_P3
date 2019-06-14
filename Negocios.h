#ifndef NEGOCIOS_H
#define NEGOCIOS_H
#include "Productos.h"
#include <string>
using std::string;
#include <vector>
using std::vector;
class Negocios
{
public:
    string nombre;
    string ubicacion;
    int locales;
    vector<Productos*> productos;
    Negocios();
    Negocios(string, string, int,vector<Productos*>);
    string getNombre();
    void setNombre(string);
    string getUbicacion();
    void setUbicacion(string);
    int getLocales();
    void setLocales(int);
    vector<Productos*> getProductos();
    void setProductos (vector<Productos*>);
};
#endif