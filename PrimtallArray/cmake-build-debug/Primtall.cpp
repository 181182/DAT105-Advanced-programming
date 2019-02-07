//
// Created by Magnus Ødegård Bergersen on 22/01/2018.
//

#include "Primtall.h"
#include <math.h>

int *Primtall::PrimArray() {

    int number[50];
    int teller = 0;

    for (int i = 2; i < 100; i++) {
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                break;
            }
            else if(j+1 > sqrt(i)){
                number[teller] = i;
                teller++;
            }
        }

    }
    return number;

}



