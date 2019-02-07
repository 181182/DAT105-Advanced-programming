//
// Created by Magnus Ødegård Bergersen on 08/04/2018.
//

#ifndef PRIORITETKO_PRIORITYQUEUE_H
#define PRIORITETKO_PRIORITYQUEUE_H

#import "edge.h"
#include <vector>

using namespace std;

class PriorityQueue {
public:

    PriorityQueue();
    PriorityQueue(vector<Edge> vec);
    PriorityQueue(const PriorityQueue &priorityQueue);

    PriorityQueue & operator += ( Edge&) ;

    void add( Edge &e);

    Edge remove();

    bool isEmpty();

    ~PriorityQueue();

private:

    std::vector<Edge> v;

};


#endif //PRIORITETKO_PRIORITYQUEUE_H
