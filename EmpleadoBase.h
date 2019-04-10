
#pragma once
#include <iostream>
class EmpleadoBase
{
protected:
    double salarioNeto;
    double salarioBruto;
private:
	std::string nombre;
	int cedula;
                    // identificacion unica de empleado
                    // esto para luego poder modificarlo
                    int id;
public:
	EmpleadoBase(std::string, int, double, int);
                    virtual void calcularSalario() = 0;
	void toString();
	~EmpleadoBase();
};