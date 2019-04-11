
#pragma once
#include "Contrato.h"
#include <string>

#include <iostream>
class EmpleadoBase
{
protected:
    double salarioNeto;
    double salarioBruto;
         Contrato* contratoEmpleado;
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
                    void setDetallesContrato(int, int, int , std::string);
                    int obtenerBeneficios();
                    void modifcarTipoContrato(std::string);
                    void setNombre(std::string);
	~EmpleadoBase();
};