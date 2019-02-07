//
// Created by Magnus Ødegård Bergersen on 04/02/2018.
//

#ifndef STABEL_STACK_H
#define STABEL_STACK_H


class Stack {

public:
    Stack ();
    Stack(int storelse);
    Stack(const Stack &stack);
//    ~Stack();

    virtual ~Stack();

    void push(int tall);
    int pop();
    int top();
    bool empty();
    int size();

private:
    int *liste;
    int teller;

};


#endif //STABEL_STACK_H
