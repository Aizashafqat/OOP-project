#include<iostream>
#include "AttributedWeightedGraph.h"
#include "AttributedWeightedGraph.cpp"
#include "AttributedGraph2.h"
#include "AttributedGraph2.cpp"
#include "AttributedNode2.h"
#include "AttributedNode2.cpp"
#include "AttributedGraph1.h"
#include "AttributedGraph1.cpp"
#include "AttributedNode1.h"
#include "AttributedNode1.cpp"
#include "SimpleGraph.h"
#include "SimpleGraph.cpp"
#include "SimpleNode.h"
#include "SimpleNode.cpp"

using namespace std;

int main()
{
    AttributedWeightedGraph atrw;


    atrw.addNode(1);
    atrw.addNode(2);
    atrw.addNode(3);
    atrw.addNode(4);
    atrw.addNode(5);

    atrw.addEdge(1,2);
    atrw.addEdge(1,4);
    atrw.addEdge(2,4);
    atrw.addEdge(2,5);
    atrw.addEdge(4,5);

    atrw.appendAttributes(1,"Dentist","Islamabad");
    atrw.appendAttributes(2,"Cook","Lahore");
    atrw.appendAttributes(3,"Physiotherapist","Karachi");
    atrw.appendAttributes(4,"Psychologist","Multan");
    atrw.appendAttributes(5,"Scientist","Rawalpindi");   

    atrw.AttributedGraph1::appendAttributes(1,18,'m');
    atrw.AttributedGraph1::appendAttributes(2,19,'f');
    atrw.AttributedGraph1::appendAttributes(3,20,'m');       
    atrw.AttributedGraph1::appendAttributes(4,21,'f');
    atrw.AttributedGraph1::appendAttributes(5,22,'m');

    atrw.appendWeight(1,2,3);
    atrw.appendWeight(1,4,4);
    atrw.appendWeight(2,4,2);
    atrw.appendWeight(2,5,6);
    atrw.appendWeight(4,5,7);
    atrw.appendWeight(3,2,4);



    atrw.sendMessage();

    atrw.AttributedGraph2::sendMessage();

    atrw.AttributedGraph1::sendMessage();

    cout<<endl<<endl;

    atrw.printData();

    
}