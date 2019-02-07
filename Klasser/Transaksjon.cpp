//
// Created by Magnus Ødegård Bergersen on 30/01/2018.
//

#include "Transaksjon.h"
#include <fstream>
#include <iostream>

using namespace std;

Transaksjon::Transaksjon(int f, int t, double b) {
    fraId = f;
    tilId = t;
    belop = b;

    ofstream myfile;
    myfile.open("Logg.txt", ios_base::app);
    myfile << "Fra ID:" << fraId << " Til ID:" << tilId << " Belop:" << belop << "\n";
    myfile.close();

}

Transaksjon::Transaksjon() {
    fraId = 0;
    tilId = 0;
    belop = 0;
}

Transaksjon::Transaksjon(const Transaksjon &transaksjon) {
    this->fraId = transaksjon.fraId;
    this->tilId = transaksjon.tilId;
    this->belop = transaksjon.belop;
}
