#include <iostream>
#include "cmake-build-debug/Primtall.h"

using namespace std;

#include <math.h>
#include <array>
int teller = 0;

#define SIZEOF_ARRAY(primtall) ( sizeof( primtall ) / sizeof( *primtall ) )

int *primliste() {
    int *prim = new int[50];
//    int teller = 0;
    for (int i = 2; i < 100; i++)
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0)
                break;
            else if (j + 1 > sqrt(i)) {
                prim[teller] = i;
                teller++;
                //   cout << i << endl;
            }

        }
    return prim;
}

int main() {

//    Primtall primtall;
//    int *number = primtall.PrimArray();
//    for (int i = 0; i < sizeof(number); i++) {
//        cout << number[i] << endl;
//    }

    int *primtall = primliste();
//    int size = *(&primtall + 1) - primtall;

    for (int i = 0; i < teller; ++i) {
        cout << primtall[i] << endl;
    }

    return 0;
}