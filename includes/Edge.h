#ifndef EDGE_H
#define EDGE_H
#include "Node.h"
#include <iostream>

using namespace std;
class Node;

class Edge {
    private:
        Node* destinationNode = nullptr;
        Node* sourceNode = nullptr;
        Edge* nextEdge = nullptr;
        int weight;

    public:
        Edge(int id, Node* sourceNode, Node* destinationNode);
        Edge(int id, int weight, Node* sourceNode, Node* destinationNode);
        ~Edge();

        Node* getDestinationNode(){return destinationNode;}
        Node* getSourceNode(){return sourceNode;}
        Edge* getNextEdge(){return nextEdge;}
        int getWeight(){return weight;} 
        
        void setWeight(int payload){weight = payload;} 
        void setDestinationNode(Node* payload);
        void setSourceNode(Node* payload);
        void setNextEdge(Edge* payload);

};

#endif // EDGE_H