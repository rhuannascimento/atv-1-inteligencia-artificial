#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>
#include "Node.h"

using namespace std;
class Node;

class Graph {
private:
    
    Node *root = nullptr;

public:
    Graph();
    ~Graph();

    Node* getRoot(){return root;};
    
    void setRoot(Node* payload){root = payload;};
};

#endif // GRAPH_H