#include "Lista.h"
#include "EmpleadoBase.h"



#include <cstdlib>
#include <iostream>

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
                    curr->empleado->guardarEmpleadoEnReporte();
			curr = curr->next;
		}
		curr->next = n;
	}
	else {
		head = n;
	}
}

void Lista::imprimirResultados() {
    std::cout << "|" << "Nombre" << " | " << "Apellidos" << " | " << "  | " << "Cedula" << "  | "  << "Telefono" << " | " << "Direccion" << " | "<< "\n";
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
void Lista::eliminarEmpleado(int cedula){
    nodePtr  delPtr = NULL;
    temp = head;
    curr = head;
    while(curr != NULL && curr->empleado->getCedula() != cedula){
        temp = curr;
        curr = curr->next;
    }
    if(curr == NULL){
        std::cout << "Numero de cedula no encontrado" << "\n";
    }
}