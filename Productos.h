#ifndef PRODUCTOS_H
#define PRODUCTOS_H
#include <string>
using std::string;
class Productos
{
public:
    string nombre;
    string tipo;
    Productos();
    Productos(string, string);
    string getNombre();
    void setNombre(string);
    string getTipo();
    void setTipo(string);
};
#endif