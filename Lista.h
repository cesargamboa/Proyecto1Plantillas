#pragma once
#include "EmpleadoBase.h"
#include <string>
class Lista {
public:
	Lista();
	void AddNode(EmpleadoBase* addData);
	void imprimirResultados();
                    void calcularSalarioEmpleados();
                    void eliminarEmpleado(int);

private:
	typedef  struct nodeEmp {
		EmpleadoBase *empleado;
		nodeEmp* next;
	}*nodePtr;
	nodePtr head;
	nodePtr curr;
	nodePtr temp;
};