//
// Created by Magnus Ødegård Bergersen on 24/01/2018.
//

#ifndef KLASSER_KONTO_H
#define KLASSER_KONTO_H

//#include "Spiller.h"
#include <string>
enum type{bitcoin, hackos, gullmynter};

class Konto {
public:


    Konto(int i, enum type t);
    Konto();
    Konto(const Konto &konto);


    double innskudd(double n);
    double uttak(double n);
    double getBeholdning() const;
    enum type getType() const;
    

private:             
    int id;
    enum type type1;
    double beholdning;
};


#endif //KLASSER_KONTO_H
