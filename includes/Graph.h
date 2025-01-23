#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>
#include "Node.h"

using namespace std;
class Node;

class Graph {
private:
    
    Node* rootNode = nullptr;
    Node* lastNode = nullptr;

public:
    Graph();
    ~Graph();

    Node* getRootNode(){return rootNode;};
    Node* getLastNode(){return lastNode;};
    
    void insertNode(Node* node);

};

#endif // GRAPH_H