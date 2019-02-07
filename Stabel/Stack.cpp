//
// Created by Magnus Ødegård Bergersen on 04/02/2018.
//

#include "Stack.h"

Stack::Stack() {
    liste = new int[10];
    teller = 0;
}

Stack::Stack(int storelse) {
    liste = new int[storelse];
    teller = 0;
}

Stack::Stack(const Stack &stack) {
    this->liste = stack.liste;
    this->teller = stack.teller;
}

void Stack::push(int tall) {
    //   int t = tall;
    liste[teller] = tall;
    teller++;
}

int Stack::pop() {
    int tall = -1;
    if (!empty()) {
        tall = liste[teller - 1];
        liste[teller - 1] = 0;
        teller--;
    }
    return tall;
}

int Stack::top() {
    if (!empty()) {
        return liste[teller - 1];
    } else
        return -1;
}

bool Stack::empty() {
    if (teller == 0) {
        return true;
    } else
        return false;
}

int Stack::size() {
    return teller;
}

Stack::~Stack() {
    delete[] liste;
}
