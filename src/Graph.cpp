#include "../includes/Graph.h"

void Graph::insertNode(Node* node){
    if(this->rootNode == nullptr){
        this->rootNode = node;
        this->lastNode = node;
    }else{
        this->lastNode->setNextNode(node);
        this->lastNode = node;
    }
}  

Graph::~Graph()
{
    Node *nextNode = this->rootNode;

    while (nextNode != nullptr)
    {
        Node *auxNode = nextNode->getNextNode();
        delete nextNode;
        nextNode = auxNode;
    }

    this->rootNode = nullptr;
    this->lastNode = nullptr;
}