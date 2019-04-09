#pragma once
#include <string>
#include "Lista.h";
#include "EmpleadoBase.h";

class Empresa
{
private:
	std::string nombre;
	std::string direccion;
	std::string telefono;
	Lista listaEmpleados;

public:
	Empresa();
	void agregarEmpleado(EmpleadoBase* empleado);
	void mostrarListaDeEmpleados();
	~Empresa();
};