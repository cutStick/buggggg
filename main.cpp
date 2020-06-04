#include <iostream>
#include "pqtype.h"
#include "point.h"
int main() {


point P(5,6);

PQType pq(5);

pq.Enqueue(P);
pq.print();

}
