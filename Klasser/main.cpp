#include <iostream>
#include "Konto.h"
#include "Spiller.h"
#include <vector>
#include "Transaksjon.h"


using namespace std;

static vector<Spiller> fyllSpillere(){

    Konto konto1(1, bitcoin);
    Spiller spiller1(1, "Magnus", konto1);

    Konto konto2(1, bitcoin);
    Spiller spiller2(2, "Jens", konto2);

    Konto konto3(1, hackos);
    Spiller spiller3(3, "Judas", konto3);

    vector<Spiller> spillere;
    spillere.push_back(spiller1);
    spillere.push_back(spiller2);
    spillere.push_back(spiller3);

    return spillere;
}

int main() {

//    Konto konto1(1, bitcoin);
 //   Spiller spiller1(1, "Magnus", konto1);

 //   Konto konto2(1, bitcoin);
 //   Spiller spiller2(2, "Jens", konto2);

//    Konto konto3(1, hackos);
//    Spiller spiller3(3, "Judas", konto3);



    vector<Spiller> spillere = fyllSpillere();
   // spillere.push_back(spiller1);
 //   spillere.push_back(spiller2);
//    spillere.push_back(spiller3);
    spillere[1].innskudd(200);
    spillere[2].innskudd(100);

    spillere[1].betal(spillere[2], 100);
    Transaksjon transaksjon(3,2,100);

//      for (int i = 0; i < spillere.size(); ++i) {

  //       cout << spillere[i].getType() << endl;
//      }


    //spiller1.betal(spiller2, 200);

//    cout << spiller1.getBeholdning() << " Spiller1" << endl;
//    cout << spiller2.getBeholdning() << " Spiller2" << endl;
    return 0;
}

