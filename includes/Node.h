#ifndef NODE_H
#define NODE_H
#include <iostream>

using namespace std;

class Node {
    private:
        int id;
        int color;
        bool visited;

    public:
        Node(int id);
        ~Node();

        int getId(){return id;}
        int getColor(){return color;}
        bool getVisited(){return visited;}

        void setId(int payload){id = payload;}
        void setColor(int payload){color = payload;}
        void setVisited(bool payload){visited = payload;}
};

#endif // NODE_H