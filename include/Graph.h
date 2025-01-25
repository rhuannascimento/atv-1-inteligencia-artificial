#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>
#include <fstream>
#include <sstream>
#include "Node.h"

using namespace std;
class Node;

class Graph {
private:
    
    Node* rootNode = nullptr;
    Node* lastNode = nullptr;
    int dimension;

public:
    Graph();
    ~Graph();

    Node* getRootNode(){return rootNode;}
    Node* getLastNode(){return lastNode;}
    Node* getNodeById(int id);
    int getDimension(){return dimension;}

    void setDimension(int payload){dimension = payload;}
    void insertNode(Node* node);
    void creatGraphByFile(string filePath);
    void saveAdjacencyListToFile(string filePath);

};

#endif // GRAPH_H