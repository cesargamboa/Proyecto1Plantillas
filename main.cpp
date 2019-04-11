
#include <iostream>
#include "EmpleadoBase.h"
#include "Lista.h";
#include "Empresa.h";
#include "EmpleadoPlanilla.h"
#include "EmpleadoServiciosProfesionales.h"
#include <iostream>
int main()
{
	EmpleadoPlanilla empleado("Cesar", 207010419, 200.0, 1);
	EmpleadoServiciosProfesionales empleado2("Franco", 1111111, 300.0, 2);

	Empresa systemsCompany;
	systemsCompany.agregarEmpleado(&empleado);
	systemsCompany.agregarEmpleado(&empleado2);
	systemsCompany.mostrarListaDeEmpleados();
                    systemsCompany.calcularSalarios();
	
	return 0;

}