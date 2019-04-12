#include "helpers.h"
#include <iostream>
void devolverMenu(){
    std::cout << "Por favor seleccione una opcion y presione Enter "<<"\n";
                        std::cout<< "1 . Actualizar datos de la empresa " <<"\n";
                        std::cout<< "2 . Mostrar Datos de la empresa " <<"\n";
                        std::cout<< "3. Registrar un empleado  "<<"\n";
                        std::cout<< "4. Modificar registro de empleados  "<<"\n";
                        std::cout<< "5 . Calcular/Mostar  pago de planilla "<<"\n";
                        std::cout<< "6 . Eliminar empleado de planilla"<<"\n";
                        std::cout<< "7 . Salir"<<"\n";
}

void devolverMenuCreacionEmpleado(){
    std::cout << "Que tipo de empleado desea ingresar? "<<"\n";
                                     std::cout << "a. Servicios profecionales "<<"\n";
                                      std::cout << "b. Planilla tiempo indefinido"<<"\n";
                                       std::cout << "c. Planilla temporal"<<"\n";
}