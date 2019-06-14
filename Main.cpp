#include "Persona.h"
#include "Clientes.h"
#include "Repartidores.h"
#include "Empleados.h"
#include "Negocios.h"
#include "Productos.h"
#include "Ordenes.h"
#include <vector>
using std::vector;
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
void AgregarPersonas();
void EliminarPersonas();
void ListarPersonas();
void AgregarNegocios();
void EliminarNegocios();
void ListarNegocios();
vector<Persona *> personas;
//vector<string> clientes2;
vector<Negocios *> negocios;
void CrearOrden();
vector<Ordenes *> proceso;
vector<Ordenes *> terminadas;
void ListarOrdenes();
void ConfirmarOrdenes();
void Archivo();
#include <fstream>
#include <stdlib.h>
using namespace std;
int main()
{
    int opcion = 0;
    while (opcion != 11)
    {
        cout << "Menu" << endl
             << "1. Agregar Persona" << endl
             << "2. Eliminar Persona" << endl
             << "3. Listar Persona" << endl
             << "4. Agregar negocio" << endl
             << "5. Eliminar Negocio" << endl
             << "6. Listar Negocio" << endl
             << "7. Crear Orden" << endl
             << "8. Listar Ordenes" << endl
             << "9. Confirmar o Cancelar ordenes" << endl
             << "10. Crear archivo" << endl
             << "11. Salir" << endl;
             cout<<"Ingrese una opcion: "<<endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            AgregarPersonas();
            break;
        case 2:
            EliminarPersonas();
            break;
        case 3:
            ListarPersonas();
            break;
        case 4:
            AgregarNegocios();
            break;
        case 5:
            EliminarNegocios();
            break;
        case 6:
            ListarNegocios();
            break;
        case 7:
            CrearOrden();
            break;
        case 8:
            ListarOrdenes();
            break;
        case 9:
            ConfirmarOrdenes();
            break;
        case 10:
            Archivo();
            break;
        default:
            break;
        }
    }
    return 0;
}
void AgregarPersonas()
{
    int opcion = 0;
    string direccion = "", telefono = "", tarjeta = "", placa = "", zona = "", horas = "", local = "";
    int pedidos = 0, atendidas = 0, ordenes = 0;
    cout << "Ingrese el nombre: " << endl;
    string nombre = "";
    cin >> nombre;
    cout << "Ingrese el ID: " << endl;
    string id = "";
    cin >> id;
    cout << "Ingrese la edad: " << endl;
    int edad = 0;
    cin >> edad;
    cout << "Menu" << endl
         << "1. Cliente" << endl
         << "2. Repartidor" << endl
         << "3. Empleado de oficina" << endl;
    cout << "Ingrese una opcion: " << endl;
    cin >> opcion;
    switch (opcion)
    {
    case 1:
        cout << "Ingrese la direccion: " << endl;
        cin >> direccion;
        cout << "Ingrese el numero de telefono: " << endl;
        cin >> telefono;
        cout << "Ingrese el numero de tarjeta de credito: " << endl;
        cin >> tarjeta;
        personas.push_back(new Clientes(nombre, id, edad, direccion, telefono, tarjeta, pedidos));
        break;
    case 2:
        cout << "Ingrese la placa de la moto: " << endl;
        cin >> placa;
        cout << "Ingrese la zona de trabajo: " << endl;
        cin >> zona;
        personas.push_back(new Repartidores(nombre, id, edad, placa, zona, atendidas));
        break;
    case 3:
        cout << "Ingrese las horas de trabajo: " << endl;
        cin >> horas;
        cout << "Ingrese el local de trabajo: " << endl;
        cin >> local;
        personas.push_back(new Empleados(nombre, id, edad, horas, local, ordenes));
        break;

    default:
        cout << "La opcion es incorrecta" << endl;
        break;
    }
}
void ListarPersonas()
{

    for (int i = 0; i < personas.size(); i++)
    {
        Clientes *cliente = dynamic_cast<Clientes *>(personas[i]);
        Repartidores *repartidor = dynamic_cast<Repartidores *>(personas[i]);
        Empleados *empleado = dynamic_cast<Empleados *>(personas[i]);
        if (cliente)
        {
            cout << i + 1 << "- Cliente: Nombre:" << personas[i]->getNombre() << " Id: " << personas[i]->getId() << " Edad: " << personas[i]->getEdad()
                 << " Direccion: " << cliente->getDireccion() << " Telefono: " << cliente->getTelefono() << " Tarjeta: " << cliente->getTarjeta()
                 << " Pedidos hechos: " << cliente->getPedidos() << " Ganacia: " << cliente->ganancias() << endl;
        }
        else if (repartidor)
        {
            cout << i + 1 << "- Repartidor: Nombre:" << personas[i]->getNombre() << " Id: " << personas[i]->getId() << " Edad: " << personas[i]->getEdad()
                 << " Placa: " << repartidor->getPlaca() << " Zona de trabajo: " << repartidor->getZona() << " Ordenes Atendidas: " << repartidor->getAtendidas()
                 << " Ganacia: " << repartidor->ganancias() << endl;
        }
        else if (empleado)
        {
            cout << i + 1 << "- Empleado de oficina: Nombre:" << personas[i]->getNombre() << " Id: " << personas[i]->getId() << " Edad: " << personas[i]->getEdad()
                 << " Horas de trabajo: " << empleado->getHoras() << " Local de trabajo: " << empleado->getLocal() << " Ordenes atendidas: " << empleado->getOrdenes()
                 << " Ganancia: " << empleado->ganancias() << endl;
        }
    }
}
void EliminarPersonas()
{
    int pos = 0;
    cout << "1. Quiere listar las personas para confirmar su posicion  2. No: " << endl;
    int op = 0;
    cin >> op;
    if (op == 1)
    {
        ListarPersonas();
    }
    cout << "Ingrese la posicion a eliminar: " << endl;
    cin >> pos;
    pos = pos - 1;
    personas.erase(personas.begin() + pos);
    cout << "Se elimino exitosamente" << endl;
}
void AgregarNegocios()
{
    string nombre = "", ubicacion = "", nombre_producto = "", tipo_producto = "";
    int locales = 0;
    vector<Productos *> productos;
    cout << "Ingrese el nombre del negocio: " << endl;
    cin >> nombre;
    cout << "Ingrese la ubicacion del negocio: " << endl;
    cin >> ubicacion;
    cout << "Ingrese el numero de locales: " << endl;
    cin >> locales;
    int opcion = 0;
    while (opcion != 2)
    {
        cout << "1. Agregar Producto  2. No agregar producto" << endl;
        cin >> opcion;
        if (opcion == 1)
        {
            cout << "Ingrese el nombre del producto: " << endl;
            cin >> nombre_producto;
            cout << "Tipo" << endl
                 << "1. Comestibe" << endl
                 << "2. No comestible" << endl;
            cout << "Ingrese una opcion: " << endl;
            int op = 0;
            cin >> op;
            if (op == 1)
            {
                tipo_producto = "Comestible";
            }
            else if (op == 2)
            {
                tipo_producto = "No Comestible";
            }
            productos.push_back(new Productos(nombre_producto, tipo_producto));
        }
    }
    negocios.push_back(new Negocios(nombre, ubicacion, locales, productos));
}
void ListarNegocios()
{
    for (int i = 0; i < negocios.size(); i++)
    {
        cout << i + 1 << "- Negocio: Nombre: " << negocios[i]->getNombre() << " Ubicacion: " << negocios[i]->getUbicacion() << " Numero de locales: " << negocios[i]->getLocales() << " Productos: ";
        for (int j = 0; j < negocios[i]->getProductos().size(); j++)
        {
            cout << "Nombre del producto: " << negocios[i]->getProductos()[j]->getNombre() << " Tipo: " << negocios[i]->getProductos()[j]->getTipo();
        }
        cout << endl;
    }
}
void EliminarNegocios()
{
    int pos = 0;
    cout << "1. Quiere listar los negocios para confirmar su posicion  2. No: " << endl;
    int op = 0;
    cin >> op;
    if (op == 1)
    {
        ListarNegocios();
    }
    cout << "Ingrese la posicion a eliminar: " << endl;
    cin >> pos;
    pos = pos - 1;
    negocios.erase(negocios.begin() + pos);
    cout << "Se elimino exitosamente" << endl;
}
void CrearOrden()
{
    int cliente = 0, negocio = 0, repartidor = 0, producto = 0;
    Clientes *cliente1;
    Negocios *negocio1;
    Repartidores *repartidor1;
    Productos *producto1;
    cout << "Lista de personas" << endl;
    ListarPersonas();
    cout << "Ingrese la posicion del cliente" << endl;
    cin >> cliente;
    cliente = cliente - 1;
    //metodo para confirmar que el seleccionado sea un cliente
    Clientes *cliente2 = dynamic_cast<Clientes *>(personas[cliente]);
    if (cliente2)
    {
        cliente1 = dynamic_cast<Clientes *>(personas[cliente]);
        int pedidos = cliente1->getPedidos() + 1;
        cout << "Pedidos: " << cliente1->getPedidos() << endl;
        cliente1->setPedidos(pedidos);
        personas[cliente] = cliente1;
    }
    else
    {
        cout << "La posicion seleccionada no es un cliente" << endl;
    }
    cout << "Lista de negocios" << endl;
    ListarNegocios();
    cout << "Ingrese la posicion del negocio: " << endl;
    cin >> negocio;
    negocio = negocio - 1;
    negocio1 = dynamic_cast<Negocios *>(negocios[negocio]);
    cout << "Lista de personas" << endl;
    ListarPersonas();
    cout << "Ingrese la posicion del repartidor" << endl;
    cin >> repartidor;
    repartidor = repartidor - 1;
    //metodo para confirmar que el seleccionado sea un repartidor
    Repartidores *repartidor2 = dynamic_cast<Repartidores *>(personas[repartidor]);
    if (repartidor2)
    {
        repartidor1 = dynamic_cast<Repartidores *>(personas[repartidor]);
        int atendidas = repartidor1->getAtendidas() + 1;
        repartidor1->setAtendidas(atendidas);
        personas[repartidor] = repartidor1;
    }
    else
    {
        cout << "La posicion seleccionada no es un repartidor" << endl;
    }
    cout << "Lista de productos del negocio que selecciono" << endl;
    for (int i = 0; i < negocio1->getProductos().size(); i++)
    {
        cout << i + 1 << "- Productos: " << negocio1->getProductos()[i]->getNombre() << " Tipo: " << negocio1->getProductos()[i]->getTipo() << endl;
    }
    cout << "Ingrese la posicion del producto: " << endl;
    cin >> producto;
    producto = producto - 1;
    producto1 = dynamic_cast<Productos *>(negocio1->getProductos()[producto]);
    string tipo = "";
    tipo = producto1->getTipo();
    string estado = "Proceso";
    proceso.push_back(new Ordenes(cliente1, negocio1, repartidor1, producto1, tipo, estado));
    for (int i = 0; i < personas.size(); i++)
    {
        Empleados *empleado = dynamic_cast<Empleados *>(personas[i]);
        if (empleado)
        {
            int orden = empleado->getOrdenes() + 1;
            empleado->setOrdenes(orden);
            personas[i] = empleado;
        }
    }
}
void ListarOrdenes()
{
    for (int i = 0; i < proceso.size(); i++)
    {
        cout << i + 1 << "- Orden: Cliente: Nombre: " << proceso[i]->getCliente()->getNombre() << " Direccion: " << proceso[i]->getCliente()->getDireccion()
             << " Numero de telefono: " << proceso[i]->getCliente()->getTelefono() << " Tarjeta: " << proceso[i]->getCliente()->getTarjeta() << " Pedidos: " << proceso[i]->getCliente()->getPedidos()
             << " Repartidor: Nombre: " << proceso[i]->getRepartidor()->getNombre() << " Id: " << proceso[i]->getRepartidor()->getId() << " Edad: " << proceso[i]->getRepartidor()->getEdad() << " Placa: " << proceso[i]->getRepartidor()->getPlaca()
             << " Ordenes atendidas: " << proceso[i]->getRepartidor()->getAtendidas() << " Negocio: Nombre: " << proceso[i]->getNegocio()->getNombre()
             << " Ubicacion: " << proceso[i]->getNegocio()->getUbicacion() << " Locales: " << proceso[i]->getNegocio()->getLocales() << " Producto: Nombre: " << proceso[i]->getProducto()->getNombre() << " Tipo: " << proceso[i]->getProducto()->getTipo()
             << " Tipo: " << proceso[i]->getTipo() << " Estado: " << proceso[i]->getProceso() << endl;
    }
}
void ConfirmarOrdenes()
{
    cout << "1. Confirmar" << endl;
    cout << "2. Cancelar" << endl;
    int opc = 0;
    cin >> opc;
    cout << "Lista de ordenes" << endl;
    ListarOrdenes();
    cout << "INgrese la posicion de la orden: " << endl;
    int pos = 0;
    cin >> pos;
    pos=pos-1;
    switch (opc)
    {
    case 1:
        proceso[pos]->setProceso("Confirmado");
        break;
    case 2:
        proceso[pos]->setProceso("Cancelado");
    default:
        break;
    }
    proceso.erase(proceso.begin()+pos);
    terminadas.push_back(proceso[pos]);
}
void Archivo()
{
    for (int i = 0; i < proceso.size(); i++)
    {
        if (proceso[i]->getProceso()=="Confirmado" || proceso[i]->getProceso()=="Cancelado")
        {
        
            string numero_orden = to_string(i+1);
            string nombre = "Factura" + numero_orden + ".txt";
            cout<<nombre<<endl;
            ofstream file;
            file.open(nombre, ios::out);
            file << "Registro de Hugo" << endl;
            file << "Factura " + numero_orden << endl;
            file << "*******************************" << endl;
            file << numero_orden + "- Orden: Cliente: Nombre: " + proceso[i]->getCliente()->getNombre() << endl;
            file << " Direccion: " + proceso[i]->getCliente()->getDireccion() << endl;
            file << " Numero de telefono: " + proceso[i]->getCliente()->getTelefono() << endl;
            file << " Tarjeta: " + proceso[i]->getCliente()->getTarjeta() << endl;
            file << " Pedidos: " + proceso[i]->getCliente()->getPedidos() << endl;
            file << " Repartidor: Nombre: " + proceso[i]->getRepartidor()->getNombre() << endl;
            file << " Id: " + proceso[i]->getRepartidor()->getId() << endl;
            file << " Edad: " + proceso[i]->getRepartidor()->getEdad() << endl;
            file << " Placa: " + proceso[i]->getRepartidor()->getPlaca() << endl;
            file << " Ordenes atendidas: " + proceso[i]->getRepartidor()->getAtendidas() << endl;
            file << " Negocio: Nombre: " + proceso[i]->getNegocio()->getNombre() << endl;
            file << " Ubicacion: " + proceso[i]->getNegocio()->getUbicacion() << endl;
            file << " Locales: " + proceso[i]->getNegocio()->getLocales() << endl;
            file << " Producto: Nombre: " + proceso[i]->getProducto()->getNombre() << endl;
            file << " Tipo: " + proceso[i]->getProducto()->getTipo() << endl;
            file << " Tipo de la orden: " + proceso[i]->getTipo() << endl;
            file << " Estado de la orden: " << proceso[i]->getProceso() << endl;
            file.close();
        }
    }
    
    cout << "Se creo exitosamente" << endl;
}
