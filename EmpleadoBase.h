
#pragma once
#include "Contrato.h"
#include <string>

#include <iostream>
class EmpleadoBase
{
protected:
    double salarioNeto;
    double salarioBruto;
private:
	std::string nombre;
        
	int cedula;
                    Contrato* contratoEmpleado;
                    
                    // identificacion unica de empleado
                    // esto para luego poder modificarlo
                    int id;
public:
	EmpleadoBase(std::string, int, double, int);
                    virtual void calcularSalario() = 0;
	void toString();
                    void setDetallesContrato(int, int, int , std::string);
                    void modifcarTipoContrato(std::string);
	~EmpleadoBase();
};