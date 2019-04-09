
#pragma once
#include <iostream>
class EmpleadoBase
{
private:
	std::string nombre;
	int cedula;
public:
	EmpleadoBase();
	void toString();
	~EmpleadoBase();
};