#include <iostream>
#include "SimpleGraph.h"
#include "SimpleGraph.cpp"
#include "SimpleNode.h"
#include "SimpleNode.cpp"
#include "AttributedNode1.h"
#include "AttributedNode1.cpp"
#include "AttributedGraph1.h"
#include "AttributedGraph1.cpp"

using namespace std;


int main() 
{
    AttributedGraph1 atr;

    atr.addNode(1);
    atr.addNode(2);
    atr.addNode(3);
    atr.addNode(4);
    atr.addNode(5);

    atr.addEdge(1,2);
    atr.addEdge(1,3);
    atr.addEdge(1,4);
    atr.addEdge(2,4);
    atr.addEdge(2,5);
    atr.addEdge(4,5);

    atr.appendAttributes(1,18,'m');
    atr.appendAttributes(2,18,'m');
    atr.appendAttributes(3,18,'m');
    atr.appendAttributes(4,18,'m');
    atr.appendAttributes(5,18,'m');

    atr.printGraphData();
    return 0;
}
