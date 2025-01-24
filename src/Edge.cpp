#include "../include/Edge.h"

Edge::Edge(int sourceNodeId, int destinationNodeId){
    this->sourceNodeId = sourceNodeId;
    this->destinationNodeId = destinationNodeId;
}

Edge::Edge(int sourceNodeId, int destinationNodeId, int weight){
    this->sourceNodeId = sourceNodeId;
    this->destinationNodeId = destinationNodeId;
    this->weight = weight;
}

Edge::~Edge(){
    this->nextEdge = nullptr;
}