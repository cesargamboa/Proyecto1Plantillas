#include "EmpleadoServiciosProfesionales.h"
#include <iostream>


EmpleadoServiciosProfesionales::EmpleadoServiciosProfesionales(std::string name, int ced, double salarioB, std::string ape, std::string tel, std::string dir,  int d, int m, int y, std::string type)
:EmpleadoBase(name, ced, salarioB, ape, tel, dir, d, m, y, type)
{
}


EmpleadoServiciosProfesionales::~EmpleadoServiciosProfesionales()
{
}
void EmpleadoServiciosProfesionales::calcularSalario(){
    EmpleadoBase::salarioNeto = EmpleadoBase::salarioBruto;
    std::cout << EmpleadoServiciosProfesionales::getNombre()<< " | "<< EmpleadoServiciosProfesionales::getCedula() << "  | " <<EmpleadoServiciosProfesionales::salarioNeto << "\n";
}