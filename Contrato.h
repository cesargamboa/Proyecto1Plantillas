
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
    void setAhorroNavideno();
    void setSalarioEscolar();
    void setPuesto(std::string);
    void setCodigoPuesto(std::string);
    int getBeneficios();
    void setInicioContrato(int, int, int);
    void setFechaClausuraContrato(int, int, int);
    virtual ~Contrato();
private:
    std::string tipoDeContrato;
    
    int ahorronNavideno;
    int salarioEscolar;
    std::string puesto;
    std::string codigoPuesto;
    Fecha* fechaInicioContrato;
    Fecha* fechaCierreContrato;
};

#endif /* CONTRATO_H */

