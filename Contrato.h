
#ifndef CONTRATO_H
#define CONTRATO_H
#include "Fecha.h"
#include <string>

// Contrato puede ser de tres tipo, 
// por esose agrego el atributo tipo
// segun el tipo, el contrato hara una cosa u otra
class Contrato {
public:
    Contrato();
    Contrato(const Contrato& orig);
    void cambiarTipoDeContrato(std::string);
    void setTipoContrato(std::string);
    void setInicioContrato(int, int, int);
    void setFechaClausuraContrato(Fecha*);
    virtual ~Contrato();
private:
    std::string tipoDeContrato;
    Fecha* fechaInicioContrato;
    Fecha* fechaCierreContrato;
};

#endif /* CONTRATO_H */

