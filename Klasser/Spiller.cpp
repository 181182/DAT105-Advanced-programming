

//
// Created by Magnus Ødegård Bergersen on 24/01/2018.
//

#include "Spiller.h"
#include "Konto.h"

using namespace std;

Spiller::Spiller() {
    id = 0;
    navn = "";
    Konto *konto = new Konto();
}

Spiller::Spiller(int i, string s, Konto &k) {
    id = i;
    navn = s;
    konto = k;
}

Spiller::Spiller(const Spiller &spiller) {
    this->id = spiller.id;
    this->navn = spiller.navn;
    this->konto = spiller.konto;
}


//Spiller::Spiller(int i, string n, int d, enum type type1){
//    id = i;
//    navn = n;
//    Konto konto1 = new Konto::Konto(d, type1);
//    konto = konto1;
//}

void Spiller::setNavn(std::string n) {
    Spiller::navn = n;
}

std::string Spiller::getNavn() {
    return Spiller::navn;
}

int Spiller::getId() {
    return Spiller::id;
}

Konto Spiller::getKonto() {
    return Spiller::konto;
};


enum type Spiller::getType() {
    return Spiller::konto.getType();
}

double Spiller::getBeholdning() {
    return Spiller::konto.getBeholdning();
}

double Spiller::innskudd(double n) {
    return Spiller::konto.innskudd(n);
}

double Spiller::uttak(double n) {
    return Spiller::konto.uttak(n);
}

bool Spiller::betal(Spiller &spiller, double n) {
    if (spiller.getType() == Spiller::konto.getType()) {
        if (uttak(n) != 1) {
            spiller.innskudd(n);
            //  if(spiller.innskudd(uttak(n)) != 1){
            return true;
        }
    }
    return false;
}
