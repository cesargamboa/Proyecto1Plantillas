
#include "Contrato.h"

Contrato::Contrato()
{
    salarioEscolar = 0;
    ahorronNavideno = 0;
}

Contrato::Contrato(const Contrato& orig) {
}

Contrato::~Contrato() {
}
void Contrato::cambiarTipoDeContrato(std::string tipo){
    tipoDeContrato = tipo;
}
void Contrato::setTipoContrato(std::string tipo){
    tipoDeContrato = tipo;
}
void Contrato::setInicioContrato(int day, int mes, int year){
    fechaInicioContrato = new Fecha(day, mes, year);
}
int Contrato::getBeneficios(){
    return ahorronNavideno + salarioEscolar;
}
void Contrato::setCodigoPuesto(std::string cod){
    codigoPuesto = cod;
}
void Contrato::setPuesto(std::string position){
    puesto = position;
}
void Contrato::setInicioContrato(int day, int month, int year){
    fechaCierreContrato =  fechaInicioContrato = new Fecha(day, mes, year);
}