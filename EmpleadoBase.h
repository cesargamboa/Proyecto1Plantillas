
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
                    std::string apellidos;
                    std::string numeroTelefono;
                    std::string direccion;
	int cedula;
                    
                    // identificacion unica de empleado
                    // esto para luego poder modificarlo
public:
	EmpleadoBase(std::string, int, double, std::string, std::string, std::string);
                    virtual void calcularSalario() = 0;
	void toString();
                    void setDetallesContrato(int, int, int , std::string);
                    std::string  getNombre();
                    int getCedula();
                    int obtenerBeneficios();
                    void guardarEmpleadoEnReporte();
                    void modifcarTipoContrato(std::string);
                    void setNombre(std::string);
                    void setApellido(std::string);
                    void setDireccion(std::string);
                    void setNumeroTelefono(std::string);
	~EmpleadoBase();
};