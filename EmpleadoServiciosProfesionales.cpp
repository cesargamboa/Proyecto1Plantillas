#include "EmpleadoServiciosProfesionales.h"
#include <iostream>


EmpleadoServiciosProfesionales::EmpleadoServiciosProfesionales(std::string name, int ced, double salarioB, std::string ape, std::string tel, std::string dir)
:EmpleadoBase(name, ced, salarioB, ape, tel, dir)
{
}


EmpleadoServiciosProfesionales::~EmpleadoServiciosProfesionales()
{
}
void EmpleadoServiciosProfesionales::calcularSalario(){
    EmpleadoBase::salarioNeto = EmpleadoBase::salarioBruto;
    std::cout << "Calculando salario del empleado de planilla\n"<<EmpleadoBase::salarioNeto;
}