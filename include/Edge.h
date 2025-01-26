#ifndef EDGE_H
#define EDGE_H
#include "Node.h"
#include <iostream>

using namespace std;
class Node;

class Edge {
    private:
        int destinationNodeId;
        int sourceNodeId;
        Edge* nextEdge = nullptr;
        int weight;

    public:
        Edge(int sourceNodeId, int destinationNodeId);
        Edge(int sourceNodeId, int destinationNodeId, int weight);
        ~Edge();

        int getDestinationNodeId(){return destinationNodeId;}
        int getSourceNodeId(){return sourceNodeId;}
        Edge* getNextEdge(){return nextEdge;}
        int getWeight(){return weight;} 
        
        void setWeight(int payload){weight = payload;} 
        void setNextEdge(Edge* payload){nextEdge = payload;}

};

#endif // EDGE_H