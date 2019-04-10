#include "EmpleadoBase.h"
#include <iostream>

EmpleadoBase::EmpleadoBase(std::string name, int ced, double sal, int identification)
:salarioBruto(sal), nombre(name), cedula(ced), id(identification)
{
}


EmpleadoBase::~EmpleadoBase()
{
}
void EmpleadoBase::toString() {
	std::cout << "El nombre";
}