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

    public:
        Edge(int id);
        ~Edge();

        Node* getDestinationNode(){return destinationNode;}
        Node* getSourceNode(){return sourceNode;}

        
        void setDestinationNode(Node* payload){destinationNode = payload;}
        void setSourceNode(Node* payload){sourceNode = payload;}

};

#endif // EDGE_H