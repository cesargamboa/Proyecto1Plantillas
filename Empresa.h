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
	Empresa(std::string);
	void agregarEmpleado(EmpleadoBase* empleado);
	void mostrarListaDeEmpleados();
                    void eliminarEmpleado(int);
                    void setDireccion(std::string);
                    void setTelefono(std::string);
                    void toString();
        void calcularSalarios();
	~Empresa();
};