#include <iostream>
#include "PriorityQueue.h"
#include "node.h"


int main() {
    Node *e = new Node('e');
    Node *f = new Node('f');
    Node *g = new Node('g');
    Node *h = new Node('h');

    Edge edge(e, f, 20, true);
    Edge edge1(e, g, 20, true);
    Edge edge2(h, g, 10, true);
    Edge edge3(h, f, 5, true);
    Edge edge4(h, e, 20, true);
    vector<Edge> vector1;
    vector1.push_back(edge1);
    vector1.push_back(edge);

 //   PriorityQueue queue(vector1);
 //   queue += edge2;
 //   queue += edge3;
 //   queue += edge4;






    return 0;
}