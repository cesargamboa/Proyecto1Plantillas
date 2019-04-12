#include "EmpleadoPlanilla.h"
#include <iostream>


EmpleadoPlanilla::EmpleadoPlanilla(std::string name, int ced, double salarioB, std::string ape, std::string tel, std::string dir, int d, int m, int y, std::string type)
:EmpleadoBase(name, ced, salarioB, ape, tel, dir, d, m, y, type)
{
}


EmpleadoPlanilla::~EmpleadoPlanilla()
{
}
void EmpleadoPlanilla::calcularSalario(){
    EmpleadoPlanilla::salarioNeto = EmpleadoPlanilla::salarioBruto - (EmpleadoPlanilla::salarioBruto*cargasSociales)-(EmpleadoPlanilla::salarioBruto*ahorroObligatorio);
    
    std::cout << EmpleadoPlanilla::getNombre()<< " | "<< EmpleadoPlanilla::getCedula() << "  | " <<EmpleadoPlanilla::salarioNeto << "\n";;
}
