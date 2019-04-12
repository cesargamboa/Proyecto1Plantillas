#include "EmpleadoPlanilla.h"
#include <iostream>


EmpleadoPlanilla::EmpleadoPlanilla(std::string name, int ced, double salarioB, std::string ape, std::string tel, std::string dir)
:EmpleadoBase(name, ced, salarioB, ape, tel, dir)
{
}


EmpleadoPlanilla::~EmpleadoPlanilla()
{
}
void EmpleadoPlanilla::calcularSalario(){
    EmpleadoPlanilla::salarioNeto = EmpleadoPlanilla::salarioBruto - (EmpleadoPlanilla::salarioBruto*cargasSociales)-(EmpleadoPlanilla::salarioBruto*ahorroObligatorio);
    
    std::cout << "Calculando salario del empleado de planilla\n"<<EmpleadoPlanilla::salarioNeto;
}