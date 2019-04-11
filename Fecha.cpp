

#include "Fecha.h"

Fecha::Fecha(int d, int m, int y) : day(d), month(m), year(y){
}

Fecha::Fecha(const Fecha& orig) {
}

Fecha::~Fecha() {
}

int Fecha::operator -(const Fecha& fecha) const{
    // retornamos numero de dias de un contrato
    return ((day-fecha.day)+((month-fecha.month)*30)+ ((year-fecha.year)*365));
}