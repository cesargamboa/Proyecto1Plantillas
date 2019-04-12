#pragma once
#include "EmpleadoBase.h"
class EmpleadoPlanilla :
	public EmpleadoBase
{
            private: 
                double cargasSociales =  0.09;
                double ahorroObligatorio = 0.02;
                double impuestoRenta = 0.2;
public:
	EmpleadoPlanilla(std::string, int, double, std::string, std::string, std::string, int, int, int, std::string);
	~EmpleadoPlanilla();
                      void calcularSalario();
};
