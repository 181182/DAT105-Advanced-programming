
//
// Created by Magnus Ødegård Bergersen on 08/04/2018.
//

#include "PriorityQueue.h"

PriorityQueue::PriorityQueue() {

}

PriorityQueue::PriorityQueue(std::vector<Edge> vec) {
    this->v = vec;
}

PriorityQueue::PriorityQueue(const PriorityQueue &priorityQueue) {
    this->v = priorityQueue.v;
}



void PriorityQueue::add( Edge &e) {
    this->v.push_back(e);
}

//Edge PriorityQueue::remove() {
//    if (!isEmpty()) {
//        Edge hoyest = v[0];
//        for (int i = 1; i < v.size(); ++i) {
//            if(hoyest.weight > v[i].weight){
//                hoyest = v[i];
//            }
//        }
//        v.erase(std::remove(v.begin(), v.end(), hoyest), v.end());
//        return hoyest;
//    }
//}

//PriorityQueue & PriorityQueue::operator+=( Edge& edge)  {
//    add(edge);
//
//}

bool PriorityQueue::isEmpty() {
    return v.empty();
}

PriorityQueue::~PriorityQueue() {

}