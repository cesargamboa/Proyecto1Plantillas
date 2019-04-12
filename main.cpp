
#include <iostream>
#include "EmpleadoBase.h"
#include "Lista.h";
#include "Empresa.h";
#include "helpers.h"
#include "EmpleadoPlanilla.h"
#include "EmpleadoServiciosProfesionales.h"
#include <string>
#include <iostream>
int main()
{                   std::string nombreEmpresa;
	// Recibir beneficios por parametros ?
//                    EmpleadoPlanilla empleado("Cesar", 207010419, 200.0, "Gamboa", "62233121", "Heredia");
	EmpleadoServiciosProfesionales empleado2("Franco", 1111111, 300.0, "Gamboa", "999999999", "Alajuela");
        
                      std::cout << "Bienvenido al sistema de manejo de personal  Smart-System \n";
                      std::cout << "Por favor ingrese el nombre de su empresa: \n";
                      std::cin>>nombreEmpresa;
                      
	Empresa systemsCompany(nombreEmpresa);
       
	systemsCompany.agregarEmpleado(&empleado2);
                    systemsCompany.calcularSalarios();
                    
                    // Interfaz de usuario
                    // nota: el programa crea automaticamente historial de empleados y de empleados despedidos
                    int opcion = 0;
                    std::string direccion, telefono;
                    char tipoEmp;
                    while(opcion != 7){
                        devolverMenu();
                        std::cin >> opcion;
                        switch (opcion)
                            {
                                case 1: 
                                    std::cout << "Por favor ingrese la nueva direccion de la empresa: "<<"\n";
                                    std::cin >> direccion;
                                    systemsCompany.setDireccion(direccion);
                                    std::cout << "Ingrese el numero de telefono: "<<"\n";
                                    std::cin >> telefono;
                                    systemsCompany.setDireccion(telefono);
                                case 2: 
                                    systemsCompany.toString();
                            case 3: 
                                devolverMenuCreacionEmpleado();
                                       std::cin>>tipoEmp;
                                       if(tipoEmp == 'a'){
                                           systemsCompany.agregarEmpleado(new EmpleadoServiciosProfesionales("Cesar", 207010419, 200.0, "Gamboa", "62233121", "Heredia"));
                                           systemsCompany.mostrarListaDeEmpleados();
                                       }
                                       if(tipoEmp == 'b'){
                                           systemsCompany.agregarEmpleado(new EmpleadoPlanilla("Maria", 207010419, 200.0, "Rosales", "62233121", "Alajuela"));
                                           systemsCompany.mostrarListaDeEmpleados();
                                       }
                                       if(tipoEmp == 'c'){
                                           // pasamos un bool q diga q no tiene plaza y es temporal
                                           systemsCompany.agregarEmpleado(new EmpleadoPlanilla("Celeste", 207010419, 200.0, "Godinez", "62233121", "Desamparados"));
                                           systemsCompany.mostrarListaDeEmpleados();
                                       }
                                       else{
                                           std::cout << "Opcion no valida"<<"\n";
                                       }
                            case 4:
                                std::cout << "Mostrando Registro de empleados: "<<"\n";
                            case 5: 
                                std::cout << "Calculando pago de planilla de empleados "<<"\n";
                            case 6:
                                std::cout << "Eliminando empleado de planilla "<< "\n";
                                default: 
                                    std::cout << "Seleccione una opcion valida";
                            }
                    }
                    
	
	return 0;

}