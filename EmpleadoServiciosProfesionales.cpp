#include "EmpleadoServiciosProfesionales.h"
#include <iostream>


EmpleadoServiciosProfesionales::EmpleadoServiciosProfesionales(std::string name, int ced, double salarioB, int identification)
:EmpleadoBase(name, ced, salarioB, identification)
{
}


EmpleadoServiciosProfesionales::~EmpleadoServiciosProfesionales()
{
}
void EmpleadoServiciosProfesionales::calcularSalario(){
    EmpleadoBase::salarioNeto = EmpleadoBase::salarioBruto;
    std::cout << "Calculando salario del empleado de planilla\n"<<EmpleadoBase::salarioNeto;
}