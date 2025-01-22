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

    public:
        Node(int id);
        ~Node();

        int getId(){return id;}
        int getColor(){return color;}
        bool getVisited(){return visited;}

        void setId(int payload){id = payload;}
        void setColor(int payload){color = payload;}
        void setVisited(bool payload){visited = payload;}
        void setNextEdge(Edge* payload);
        void setLastEdge(Edge* payload);

};

#endif // NODE_H