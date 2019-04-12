#pragma once
#include "EmpleadoBase.h"
class EmpleadoServiciosProfesionales :
	public EmpleadoBase
{
public:
	EmpleadoServiciosProfesionales(std::string, int, double, std::string, std::string, std::string);
	~EmpleadoServiciosProfesionales();
            void calcularSalario();
};