#include "EmpleadoBase.h"
#include "Fecha.h"
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
void EmpleadoBase::modifcarTipoContrato(std::string nuevoTipo){
    contratoEmpleado->cambiarTipoDeContrato(nuevoTipo);
}
void EmpleadoBase::setDetallesContrato(int d,  int m, int y, std::string tipo){
    contratoEmpleado->setInicioContrato(d, m, y);
    contratoEmpleado->setTipoContrato(tipo);
}