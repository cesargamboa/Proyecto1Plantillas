
#include <iostream>
#include "EmpleadoBase.h"
#include "Lista.h";
#include "Empresa.h";
#include "helpers.h"
#include "EmpleadoPlanilla.h"
#include "EmpleadoServiciosProfesionales.h"
#include <string>
#include <iostream>

int main() {
    std::string nombreEmpresa;
    // Recibir beneficios por parametros ?

    imprimirMensajeBienvenida();
    std::cout << "Por favor ingrese el nombre de su empresa: \n";
    std::cin>>nombreEmpresa;

    Empresa systemsCompany(nombreEmpresa);



    // Interfaz de usuario
    // nota: el programa crea automaticamente historial de empleados y de empleados despedidos
    char opcion = '0';
    std::string direccion, telefono;
    int numeroCedEliminar;
    char tipoEmp;
    while (opcion != 8) {
        devolverMenu();
        std::cin >> opcion;
        switch (opcion) {
            case '1':
                std::cout << "Por favor ingrese la nueva direccion de la empresa: " << "\n";
                std::cin >> direccion;
                systemsCompany.setDireccion(direccion);
                std::cout << "Ingrese el numero de telefono: " << "\n";
                std::cin >> telefono;
                systemsCompany.setDireccion(telefono);
            case '2':
                systemsCompany.toString();
            case '3':
                devolverMenuCreacionEmpleado();
                std::cin>>tipoEmp;
                if (tipoEmp == 'a') {
                    systemsCompany.agregarEmpleado(new EmpleadoServiciosProfesionales("Cesar", 207010419, 200.0, "Gamboa", "62233121", "Heredia", 1,2,2017, "servicios profesionales"));
                    opcion = '0';
                }
                if (tipoEmp == 'b') {
                    // nombre, ced, salario, apellidos, telefono, direccion, isTemporalEmployee, dia, mes, a;o
                    systemsCompany.agregarEmpleado(new EmpleadoPlanilla("Maria", 207010419, 200.0, "Rosales", "62233121", "Alajuela", 2, 2, 2019, "planilla"));
                    opcion = '0';
                }
                if (tipoEmp == 'c') {
                    // pasamos un bool q diga q no tiene plaza y es temporal
                    systemsCompany.agregarEmpleado(new EmpleadoPlanilla("Celeste", 207010419, 200.0, "Godinez", "62233121", "Desamparados", 2, 3, 2018, "planilla temporal"));
                    opcion = '0';
                }
            case '4':
                systemsCompany.mostrarListaDeEmpleados();
            case '5':
                imprimirMensajeDePagoPlanilla();
                systemsCompany.calcularSalarios();
            case '6':
                std::cout << "Ingrese numero de cedula del empleado a eliminar: " << "\n";
                std::cin>>numeroCedEliminar;
                systemsCompany.eliminarEmpleado(numeroCedEliminar);

            case '7':
                std::cout << "Calculando vacaciones empleados " << "\n";
            default:
                std::cout << "Seleccione una opcion valida";
        }
    }


    return 0;

}