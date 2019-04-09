
#include <iostream>
#include "EmpleadoBase.h"
#include "Lista.h";
#include "Empresa.h";
#include "EmpleadoPlanilla.h"
#include "EmpleadoServiciosProfesionales.h"
#include <iostream>
int main()
{
	EmpleadoPlanilla empleado;
	EmpleadoServiciosProfesionales empleado2;

	Empresa systemsCompany;
	systemsCompany.agregarEmpleado(&empleado);
	systemsCompany.agregarEmpleado(&empleado2);
	systemsCompany.mostrarListaDeEmpleados();
	
	return 0;

}