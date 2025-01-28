#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <list>
#include "Edge.h"

using namespace std;
class Edge;

class Node {
    private:
        int id;
        int color;
        bool visited;
        
        //Graph
        Edge* firstEdge = nullptr;
        Edge* lastEdge = nullptr;
        Node* nextNode = nullptr;
        
        //Tree
        list<Node*> childNode;
        

    public:
        Node(int id);
        ~Node();

        int getId(){return id;};
        int getColor(){return color;};
        bool getVisited(){return visited;};
       
        void setId(int payload){id = payload;};
        void setColor(int payload){color = payload;};
        void setVisited(bool payload){visited = payload;};
        
        //Graph
        Edge* getFirstEdge(){return firstEdge;};
        Edge* getLastEdge(){return lastEdge;};
        Node* getNextNode(){return nextNode;};
        
        void setNextNode(Node* payload){nextNode = payload;};
        void insertEdge(Edge* edge);

        //Tree
        list<Node*> getChildNode(){return childNode;};
        void insertChildNode(Node* node){childNode.push_back(node);};
};

#endif // NODE_H