#include "../includes/Node.h"

Node::Node(int id){
    this->id = id;
}

void Node::insertEdge(Edge* edge){
    if(this->firstEdge == nullptr){
        this->firstEdge = edge;
        this->lastEdge = edge;
    }else{
        this->lastEdge->setNextEdge(edge);
        this->lastEdge = edge;
    }
}

Node::~Node(){
    Edge* edgeToDelete = this->firstEdge;

    while (edgeToDelete != nullptr)
    {
        Edge *auxEdge = edgeToDelete->getNextEdge();
        delete edgeToDelete;
        edgeToDelete = auxEdge;
    }
    
    Node* nextNode = nullptr;
}