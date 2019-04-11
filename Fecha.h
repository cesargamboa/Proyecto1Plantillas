

#ifndef FECHA_H
#define FECHA_H

class Fecha {
public:
    Fecha(int, int, int);
    Fecha(const Fecha& orig);
    int operator - ( Fecha const &fecha) const;
    virtual ~Fecha();
private:
    // lo voy a poner en ingles, para no tener que poner year como ano
    int day;
    int month;
    int year;

};

#endif /* FECHA_H */

