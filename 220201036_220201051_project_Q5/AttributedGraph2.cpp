#include <iostream>
#include "AttributedGraph2.h"

using namespace std;

AttributedGraph2::AttributedGraph2()
{
}
AttributedGraph2::AttributedGraph2(int nodes, int edges):AttributedGraph1(nodes,edges)
{
}
AttributedGraph2::~AttributedGraph2()
{
    delete Nodes;
}
void AttributedGraph2::appendAttributes(int nodeid,string profession, string location)
{
    for (int i=0;i<numberOfNodes;i++)
        {
            if(Nodes[i].getNodeId() == nodeid)
            {
                Attributed2[i].setCityName(location);
                Attributed2[i].setProfession(profession);
            }
        }
}

void AttributedGraph2::appendAttributes()
    {
        string temp0;
        string temp1;
        cout<<"Please give attributes for these Nodes:"<<endl;
        for (int i=0;i<numberOfNodes;i++)
        {
            cout<<"Node ID: "<<Nodes[i].getNodeId()<<endl;
            cout<<"City Name: ";
            cin>>temp1;
            Attributed2[i].setCityName(temp1);
            cout<<"Profession :";
            cin>>temp0;
            Attributed2[i].setProfession(temp0);
        }   

    }

AttributedNode2* AttributedGraph2::getAttNode2()
{
    return Attributed2;
}

void AttributedGraph2::printNeighbors(int nodeId)
{
        printNeighbours(nodeId);
        for(int i=0;i<numberOfNodes;i++)
        {
            if (Nodes[i].getNodeId()==nodeId)
            {
                cout<<endl<<"Node ID: "<<nodeId<<endl;
                cout<<"City Name: "<<Attributed2[i].getCityName();
                cout<<"Profession: "<<Attributed2[i].getProfession();
            }
        }
}

void AttributedGraph2::printData()
{
     
    for (int i = 0; i < numberOfNodes; i++) 
    {
        cout<<endl;
        cout<<"Node "<<i+1<<": "<<Nodes[i].getNodeId()<<endl;
        cout<<"City Name: "<<Attributed2[i].getCityName()<<endl;
        cout<<"Profession: "<<Attributed2[i].getProfession()<<endl;
        printNeighbours(Nodes[i].getNodeId());
        cout<<endl;
    }          
    

}

void AttributedGraph2::sendMessage()
{
    cout<<endl<<"Message from AttributedGraph2"<<endl;
}