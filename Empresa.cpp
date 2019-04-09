#include "Empresa.h"
#include "EmpleadoBase.h";
#include <iostream>

Empresa::Empresa()
{
}


Empresa::~Empresa()
{
}
void Empresa::agregarEmpleado(EmpleadoBase* empleado) {
	std::cout << "intentando agregar";
	listaEmpleados.AddNode(empleado);
}
void Empresa::mostrarListaDeEmpleados() {
	std::cout << "Ingresando a lista de empleados";
	listaEmpleados.imprimirResultados();
}