#include <iostream>
#include "SimpleGraph.h"
#include "SimpleGraph.cpp"
#include "SimpleNode.h"
#include "SimpleNode.cpp"
#include "AttributedNode2.h"
#include "AttributedNode2.cpp"
#include "AttributedGraph2.h"
#include "AttributedGraph2.cpp"
#include "AttributedGraph1.h"
#include "AttributedGraph1.cpp"
#include "AttributedNode1.h"
#include "AttributedNode1.cpp"

using namespace std;

int main()
{
    AttributedGraph2 atr;

    atr.addNode(1);
    atr.addNode(2);
    atr.addNode(3);
    atr.addNode(4);
    atr.addNode(5);

    atr.addEdge(1,2);
    atr.addEdge(1,4);
    atr.addEdge(2,4);
    atr.addEdge(2,5);
    atr.addEdge(4,5);

    atr.appendAttributes(1,"Dentist","Islamabad");
    atr.appendAttributes(2,"Cook","Lahore");
    atr.appendAttributes(3,"Physiotherapist","Karachi");
    atr.appendAttributes(4,"Psychologist","Multan");
    atr.appendAttributes(5,"Scientist","Rawalpindi");   

    atr.AttributedGraph1::appendAttributes(1,18,'m');
    atr.AttributedGraph1::appendAttributes(2,19,'f');
    atr.AttributedGraph1::appendAttributes(3,20,'m');       
    atr.AttributedGraph1::appendAttributes(4,21,'f');
    atr.AttributedGraph1::appendAttributes(5,22,'m');

    atr.printData();

}