#include <iostream>
#include <cmath>

#define flag1 1    //  1 = 00 0001
#define flag2 2    //  2 = 00 0010
#define flag3 4    //  4 = 00 0100
#define flag4 8    //  8 = 00 1000
#define flag5 16   // 16 = 01 0000

using namespace std;

int finnBit(int number, int position) {
//    unsigned int tall = t;
//    tall = tall & possisjon;
//    return tall;
//    return 1 == ((possisjon << t) & 1);
    return (number >> position) & 1;
}

int antallBit(int number) {
    int teller = 0;
    for (int i = 0; i < 5; ++i) {
        teller = finnBit(number, i) + teller;
    }
    if(teller == 0){
        teller = -1;
    }
    return teller;
}

int hoyestBit(int number) {
    int tall = -1;
    for (int i = 0; i < 5; i++) {
        if (finnBit(number, i) == 1) {
            tall = i;
        }
    }
    return tall;
}

void speilBit(int number) {

    cout << "Speilvendt bit nummer ";
    for (int i = 0; i < 5; ++i) {
        cout << finnBit(number, i);
    }
    cout << endl;

}

bool monsterBit(int number, string monster) {

    bool sann = true;
    string tall;
    for (int i = 0; i < 5; ++i) {
        tall = tall + to_string(finnBit(number, i));
//        if(finnBit(number, i) != finnBit(monster, i)){
//            sann = false;
        //       }
    }
    if (tall == monster)
        return sann;
    else
        return false;


}
int antallEtterBit(int number, int tall){
    int teller = 0;
    for (int i = 0; i < 5-tall; ++i) {
        teller = finnBit(number, i) + teller;
    }
    if(teller == 0){
        teller = -1;
    }
    return teller;
}

int antallForBit(int number, int tall){
    int teller = 0;
    for (int i = tall; i < 5; ++i) {
        teller = finnBit(number, i) + teller;
    }
    if(teller == 0){
        teller = -1;
    }
    return teller;
}


int main() {
    int i = finnBit(3, 1);
    cout << "Posisjon -- har verdi " << i << endl;
    int j = antallBit(3);
    cout << "Antall bit i -- " << j << endl;
    int k = hoyestBit(9);
    cout << "Høyest bit i -- " << k << endl;
    speilBit(16);
    bool monster = (monsterBit(16, "00001")); //Blir speilvendt
    cout << "Er mønster lik? " << monster << endl;
    int antallbitsEtter = antallEtterBit(3, 2);
    cout << "Antall bits i -- hvor man glemmer de -- første bitsene " << antallbitsEtter << endl;
    int antallbitsfor = antallForBit(3, 2);
    cout << "Antall bits i -- hvor man glemme de -- siste bitsene " << antallbitsfor << endl;



//    unsigned int a = finnBit(flag2, 3);
    //  if(finnBit(4, flag3)){
    //     cout<<"Sant"<<endl;
    //  }
//    else
//        cout <<"Usant"<<endl;
    //cout << finnBit(4, flag3) << endl;
    return 0;
}