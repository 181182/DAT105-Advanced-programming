//
// Created by Magnus Ødegård Bergersen on 30/01/2018.
//

#ifndef KLASSER_TRANSAKSJON_H
#define KLASSER_TRANSAKSJON_H


class Transaksjon {
public:
    Transaksjon(int f, int t, double b);

    Transaksjon();

    Transaksjon(const Transaksjon &transaksjon);




private:
    int fraId;
    int tilId;
    double belop;
};


#endif //KLASSER_TRANSAKSJON_H
