#include "EmpleadoBase.h"
#include "Fecha.h"
#include <fstream>
#include <iostream>

EmpleadoBase::EmpleadoBase(std::string name, int ced, double sal, std::string apell, std::string tele, std::string dir)
:salarioBruto(sal), 
        nombre(name), 
        cedula(ced), 
        apellidos(apell),
        numeroTelefono(tele),
        direccion(dir)
{
}


EmpleadoBase::~EmpleadoBase()
{
}
void EmpleadoBase::toString() {
	std::cout << "|" << nombre << " | " << apellidos << " | " << "  | " << cedula << "  | "  << numeroTelefono << " | " << direccion << " | "<< "\n";
}
void EmpleadoBase::modifcarTipoContrato(std::string nuevoTipo){
    contratoEmpleado->cambiarTipoDeContrato(nuevoTipo);
}
void EmpleadoBase::setDetallesContrato(int d,  int m, int y, std::string tipo){
    contratoEmpleado->setInicioContrato(d, m, y);
    contratoEmpleado->setTipoContrato(tipo);
}
void EmpleadoBase::setNombre(std::string n){
    nombre = n;
}
std::string EmpleadoBase::getNombre(){
    return nombre;
}
int EmpleadoBase::getCedula(){
    return cedula;
}
void EmpleadoBase::guardarEmpleadoEnReporte(){
    std::ofstream fs;
   fs.open("./archivos/historialEmpleados.txt");
    fs << nombre << cedula << apellidos << numeroTelefono << direccion <<  "\n";
    fs.close();
}