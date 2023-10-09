#include <iostream>
#include "SimpleNode.h"
using namespace std;

SimpleNode::SimpleNode() 
    {
        nodeId = 0;
        neighborCount = 0;
        arrayOfNeighbors = nullptr;
    }

    SimpleNode::SimpleNode(int id, int count) 
    {
        nodeId = id;
        neighborCount = count;
        arrayOfNeighbors = new SimpleNode*[neighborCount];
        for (int i=0;i<neighborCount;i++)
        {
            arrayOfNeighbors[i] = new SimpleNode;
        }
    }

    SimpleNode::~SimpleNode() 
    {
    }

    void SimpleNode::addEdge(SimpleNode& obj) 
    {
        int count=0;
        for (int i=0;i<neighborCount;i++)
        {
            if (arrayOfNeighbors[i]->getNodeId()==obj.getNodeId())
            {
                count++;
            }
        }
        if (count ==0)
        {
            SimpleNode** newArr = new SimpleNode*[neighborCount + 1];
            for (int i = 0; i < neighborCount; i++) 
            {
               newArr[i] = arrayOfNeighbors[i];
            }
            newArr[neighborCount] = &obj;
            delete[] arrayOfNeighbors;
            arrayOfNeighbors = newArr;
            neighborCount++;
        }    
    }
    int SimpleNode::getNeighborCount()
    {
        return neighborCount;
    }
    SimpleNode** SimpleNode::getNeighbor()
    {
        return arrayOfNeighbors;
    }
    int SimpleNode::getNodeId()
    {
        return nodeId;
    }
    void SimpleNode::setNodeId(int a) 
    {
        nodeId = a;
    }
    void SimpleNode::setNeighborCount(int a) 
    {
        neighborCount = a;
    }
