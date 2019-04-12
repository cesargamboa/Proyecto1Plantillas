#include "Empresa.h"
#include "EmpleadoBase.h";
#include <iostream>

Empresa::Empresa(std::string nomb):nombre(nomb)
{
}


Empresa::~Empresa()
{
}
void Empresa::agregarEmpleado(EmpleadoBase* empleado) {
	listaEmpleados.AddNode(empleado);
}
void Empresa::mostrarListaDeEmpleados() {
	listaEmpleados.imprimirResultados();
}
void Empresa::calcularSalarios(){
    listaEmpleados.calcularSalarioEmpleados();
}
void Empresa::setDireccion(std::string address){
    direccion = address;
}
void Empresa::setTelefono(std::string phone){
    telefono =  phone;
}
void Empresa::toString(){
    std::cout << "Mostrando informacion de le empresa"<<"\n";
    std::cout << "Empresa: " << nombre << "\n";
    std::cout << "Telefono: " << telefono << "\n";
    std::cout << "Direccion: " << direccion << "\n";
}
void Empresa::eliminarEmpleado(int numeroCed){
    listaEmpleados.eliminarEmpleado(numeroCed);
}