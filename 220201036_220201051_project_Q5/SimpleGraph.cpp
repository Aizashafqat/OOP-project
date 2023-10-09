#include <iostream>
#include "SimpleGraph.h"
using namespace std;

SimpleGraph::SimpleGraph() 
    {
        numberOfNodes = 0;
        numberOfEdges = 0;
        Nodes = nullptr;
    }

SimpleGraph::SimpleGraph(int nodes, int edges) 
    {
        numberOfNodes = nodes;
        numberOfEdges = edges;
        Nodes = new SimpleNode[numberOfNodes];
    }

SimpleGraph::~SimpleGraph() 
    {
    }

int SimpleGraph::getNumNodes()
{
    return numberOfNodes;
}
int SimpleGraph::getNumEdges()
{
    return numberOfEdges;
}


void SimpleGraph::addNode(int NodeId)
    {
        SimpleNode* newArr = new SimpleNode[numberOfNodes + 1];
        for (int i = 0; i < numberOfNodes; i++) {
            newArr[i] = Nodes[i];
        }
        newArr[numberOfNodes].setNodeId(NodeId);
        delete[] Nodes;
        Nodes = newArr;
        numberOfNodes++;
    }

void SimpleGraph::addEdge(int nodeId1, int nodeId2)
    {
        for (int i = 0; i < numberOfNodes; i++)
        {
            if (nodeId1 == Nodes[i].getNodeId())
            {
                for (int j = 0; j < numberOfNodes; j++)
                {
                    if (nodeId2 == Nodes[j].getNodeId())
                    {
                        Nodes[i].addEdge(Nodes[j]);
                        Nodes[j].addEdge(Nodes[i]);
                        return;
                    }
                }
            }
        }
    }


void SimpleGraph::printNeighbours(int nodeId)
{
    for (int i = 0; i < numberOfNodes; i++)
    {
        if (nodeId == Nodes[i].getNodeId())
        {
            cout<<"The node IDs of the neighbors of node "<<nodeId<<" are:  " ;
            for (int j = 0; j < Nodes[i].getNeighborCount(); j++)
            {
                int a;
                a = Nodes[i].getNeighbor()[j]->getNodeId();
                cout<<a<<"  ";
            }
            if (Nodes[i].getNeighborCount() == 0)
            {
                cout<<"It has no neighbours."<<endl;
            }
        }
    }
    cout<<endl;
}

void SimpleGraph::printGraphData() 
    {
        cout<<"The nodes with their neighbors are: "<<endl;
        for (int i = 0; i < numberOfNodes; i++) 
        {
            cout<<"Node "<<i+1<<" : "<<"  ";
            cout<<Nodes[i].getNodeId()<<endl;
            printNeighbours(Nodes[i].getNodeId());
            cout<<endl;
        }
    }
