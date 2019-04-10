#include "Lista.h"
#include "EmpleadoBase.h"



#include <cstdlib>
#include <iostream>
#include <fstream>

Lista::Lista() {
	head = NULL;
	curr = NULL;
}
void Lista::AddNode(EmpleadoBase* addData) {
	nodePtr n = new nodeEmp;
	n->empleado = addData;
	n->next = NULL;
	n->empleado = addData;
	if (head != NULL) {
		curr = head;
		while (curr->next != NULL) {
			curr = curr->next;
		}
		curr->next = n;
	}
	else {
		head = n;
	}
}

void Lista::imprimirResultados() {
	curr = head;
	while (curr != NULL) {
		curr->empleado->toString();
		curr = curr->next;
	}

}
void Lista::calcularSalarioEmpleados() {
	curr = head;
	while (curr != NULL) {
		curr->empleado->calcularSalario();
		curr = curr->next;
	}

}