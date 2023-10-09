#include <iostream>
#include "SimpleGraph.h"
#include "SimpleGraph.cpp"
#include "SimpleNode.h"
#include "SimpleNode.cpp"

using namespace std;

int main() 
{
    SimpleGraph smg;

    smg.addNode(1);
    smg.addNode(2);
    smg.addNode(3);
    smg.addNode(4);
    smg.addNode(5);

    smg.addEdge(1,2);
    smg.addEdge(1,3);
    smg.addEdge(1,4);
    smg.addEdge(1,5);
    smg.addEdge(2,3);
    smg.addEdge(2,4);
    smg.addEdge(2,5);
    smg.addEdge(3,4);
    smg.addEdge(3,5);
    smg.addEdge(4,5);



    smg.printGraphData();
}
