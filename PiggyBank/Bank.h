//
// Created by Magnus Ødegård Bergersen on 01/04/2018.
//

#ifndef PIGGYBANK_BANK_H
#define PIGGYBANK_BANK_H


class Bank {

public:

    Bank();
    Bank(const Bank &bank);

    int getSum();
    void addSum(int n);
    void trekk(int n);


private:
    int sum = 0;
};


#endif //PIGGYBANK_BANK_H
