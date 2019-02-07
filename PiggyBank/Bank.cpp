
#include "Bank.h"

Bank::Bank(){
    this->sum=0;
}

void Bank::trekk(int n) {
    this->sum = sum - n;
}

Bank::Bank(const Bank &bank) {
    this->sum = bank.sum;
}

int Bank::getSum() {
    return sum;
}

void Bank::addSum(int n) {
    this->sum = this->sum + n;
}
//
// Created by Magnus Ødegård Bergersen on 01/04/2018.
//

