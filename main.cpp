
#include <iostream>
#include "EmpleadoBase.h"
#include "Lista.h";
#include "Empresa.h";
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
                    
                    int opcion = 0;
                    std::string direccion, telefono;
                    char tipoEmp;
                    while(opcion != 6){
                        std::cout << "Por favor seleccione una opcion y presione Enter "<<"\n";
                        std::cout<< "1 . Actualizar datos de la empresa "<<nombreEmpresa<<"\n";
                        std::cout<< "2 . Mostrar Datos de la empresa "<<nombreEmpresa<<"\n";
                        std::cout<< "3. Registrar un empleado  "<<"\n";
                        std::cout<< "4. Modificar registro de empleado  "<<"\n";
                        std::cout<< "5 . Calcular/Mostar  pago de planilla "<<"\n";
                        std::cout<< "6 . Salir"<<"\n";
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
                                    std::cout << "Que tipo de empleado desea ingresar? "<<"\n";
                                     std::cout << "a. Servicios profecionales "<<"\n";
                                      std::cout << "b. Planilla tiempo indefinido"<<"\n";
                                       std::cout << "c. Planilla temporal"<<"\n";
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
                                default: 
                                    std::cout << "Seleccione una opcion valida";
                            }
                    }
                    
	
	return 0;

}