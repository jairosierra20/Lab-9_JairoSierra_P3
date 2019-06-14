#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using std::string;
class Persona
{
public:
    string nombre;
    string id;
    int edad;
    Persona();
    Persona(string, string, int);
    string getNombre();
    void setNombre(string);
    string getId();
    void setId(string);
    int getEdad();
    void setEdad(int);
    virtual int ganancias() = 0;
};
#endif