#pragma once
#include "EmpleadoBase.h"
class EmpleadoServiciosProfesionales :
	public EmpleadoBase
{
public:
	EmpleadoServiciosProfesionales(std::string, int, double, int);
	~EmpleadoServiciosProfesionales();
            void calcularSalario();
};