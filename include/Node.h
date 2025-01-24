#ifndef NODE_H
#define NODE_H
#include <iostream>
#include "Edge.h"

using namespace std;
class Edge;

class Node {
    private:
        int id;
        int color;
        bool visited;
        Edge* firstEdge = nullptr;
        Edge* lastEdge = nullptr;
        Node* nextNode = nullptr;

    public:
        Node(int id);
        ~Node();

        int getId(){return id;}
        int getColor(){return color;}
        bool getVisited(){return visited;}
        Edge* getFirstEdge(){return firstEdge;}
        Edge* getLastEdge(){return lastEdge;}
        Node* getNextNode(){return nextNode;}

        void setId(int payload){id = payload;}
        void setColor(int payload){color = payload;}
        void setVisited(bool payload){visited = payload;}
        void setNextNode(Node* payload){nextNode = payload;}
        void insertEdge(Edge* edge);

};

#endif // NODE_H