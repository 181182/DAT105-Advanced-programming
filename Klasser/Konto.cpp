//
// Created by Magnus Ødegård Bergersen on 24/01/2018.
//

#include "Konto.h"

using namespace std;

Konto::Konto(int i, enum type t) {
    id = i;
    type1 = t;
    beholdning = 0;
}

Konto::Konto() {
    id = 0;
    type1 = bitcoin;
    beholdning = 0;
}

Konto::Konto(const Konto &konto) {
    id = konto.id;
    type1 = konto.type1;
}

double Konto::getBeholdning() const {
    return beholdning;
}

double Konto::innskudd(double n) {
    if (n > 0) {
        Konto::beholdning = Konto::beholdning + n;
        return 0;
    } else
        return 1;
}

double Konto::uttak(double n) {
    if (n > 0 && (Konto::beholdning - n) >= 0) {
        Konto::beholdning = Konto::beholdning - n;
        return 0;
    } else
        return 1;
}

enum type Konto::getType() const {
    return type1;
}