//
// Created by Magnus Ødegård Bergersen on 24/01/2018.
//

#ifndef KLASSER_SPILLER_H
#define KLASSER_SPILLER_H

#include <string>
#include "Konto.h"

using namespace std;

class Spiller {
public:

    Spiller();

    Spiller(int i, string n, Konto &k);

    Spiller(const Spiller &spiller1);

    void setNavn(string n);

    string getNavn();

    int getId();

    enum type getType();

    double getBeholdning();

    double innskudd(double n);

    double uttak(double n);

    Konto getKonto();

    bool betal(Spiller &spiller, double n);


private:
    int id;
    string navn;
    Konto konto;
};


#endif //KLASSER_SPILLER_H
