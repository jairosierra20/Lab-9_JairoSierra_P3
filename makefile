main.out: Main.o Persona.o Clientes.o Repartidores.o Empleados.o Negocios.o Productos.o Ordenes.o
	g++ Main.o Persona.o Clientes.o Repartidores.o Empleados.o Negocios.o Productos.o Ordenes.o -o main.out
main.o: Main.cpp Persona.cpp Clientes.cpp Repartidores.cpp Empleados.cpp Negocios.cpp Productos.cpp Ordenes.cpp
	g++ -c 	main.cpp