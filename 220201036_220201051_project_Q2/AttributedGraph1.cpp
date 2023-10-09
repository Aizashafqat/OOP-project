#include <iostream>

#include "AttributedGraph1.h"
using namespace std;

AttributedGraph1::AttributedGraph1()
{

}
AttributedGraph1::AttributedGraph1(int nodes,int edges):SimpleGraph(nodes,edges)
{

}
AttributedGraph1::~AttributedGraph1()
{
}

void AttributedGraph1::appendAttributes(int nodeId,int Age,char Gender)
{
    for (int i=0;i<numberOfNodes;i++)
    {
        if (Nodes[i].getNodeId() == nodeId)
        {
            Attributed1[i].setAge(Age);
            Attributed1[i].setGender(Gender);
            break;
        }
    }
}
void AttributedGraph1::appendAttributes()
{
    int temp0;
        char temp1;
        cout<<"Please give attributes for these Nodes:"<<endl;
        for (int i=0;i<numberOfNodes;i++)
        {
            cout<<"Node ID: "<<Nodes[i].getNodeId()<<endl;
            cout<<"Gender (m/f): ";
            cin>>temp1;
            Attributed1[i].setGender(temp1);
            cout<<"Age :";
            cin>>temp0;
            Attributed1[i].setAge(temp0);
        }    
}
void AttributedGraph1::printGraphData()
{
    for (int i = 0; i < numberOfNodes; i++) 
    {
        cout<<endl;
        cout<<"Node "<<i+1<<": "<<Nodes[i].getNodeId()<<endl;
        cout<<"Gender: "<<Attributed1[i].getGender()<<endl;
        cout<<"Age: "<<Attributed1[i].getAge()<<endl;
        printNeighbours(Nodes[i].getNodeId());
        cout<<endl;
    }        
}

AttributedNode1* AttributedGraph1::getAttNodes()
{
    return Attributed1;
}