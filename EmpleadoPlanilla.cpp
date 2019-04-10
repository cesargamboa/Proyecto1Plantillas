#include "EmpleadoPlanilla.h"
#include <iostream>


EmpleadoPlanilla::EmpleadoPlanilla(std::string name, int ced, double salarioB, int identification)
:EmpleadoBase(name, ced, salarioB, identification)
{
}


EmpleadoPlanilla::~EmpleadoPlanilla()
{
}
void EmpleadoPlanilla::calcularSalario(){
    EmpleadoPlanilla::salarioNeto = EmpleadoPlanilla::salarioBruto - (EmpleadoPlanilla::salarioBruto*cargasSociales)-(EmpleadoPlanilla::salarioBruto*ahorroObligatorio);
    
    std::cout << "Calculando salario del empleado de planilla\n"<<EmpleadoPlanilla::salarioNeto;
}