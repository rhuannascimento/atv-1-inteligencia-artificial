#include "../include/Graph.h"

using namespace std;

Graph::Graph(){

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

void Graph::insertNode(Node* node){
    if(this->rootNode == nullptr){
        this->rootNode = node;
        this->lastNode = node;
    }else{
        this->lastNode->setNextNode(node);
        this->lastNode = node;
    }
}  

Node* Graph::getNodeById(int id){
    if(this->rootNode == nullptr){
        return nullptr;
    }

    Node* actualNode = this->rootNode;
   
    while(actualNode->getNextNode() != nullptr){
        if(actualNode->getId() == id){
            return actualNode;
        }
        actualNode = actualNode->getNextNode();
    }

    return nullptr;
}

void Graph::creatGraphByFile(string filePath){
    ifstream archive(filePath);
    
    if (!archive.is_open()){
        cerr << "FileError: Não foi possível abrir o arquivo:" << filePath  << " !" << endl;
        return;
    }

    string line;
    string readValue;
    bool isDimensionReadTime = false;
    bool isGraphReadTime = false;
    
    while (getline(archive, line)){
        istringstream iss(line);

        if (!line.empty()){
            iss >> readValue;

            if(isDimensionReadTime){
                int dimension = 0;
                dimension = stoi(readValue);
                this->setDimension(dimension);
                isDimensionReadTime = false; 
            }else if(isGraphReadTime){
                int sourceNodeId = stoi(readValue);
                iss >> readValue;
                int targetNodeId = stoi(readValue);

                Node* sourceNode = this->getNodeById(sourceNodeId);
                Node* targetNode = this->getNodeById(targetNodeId);

                if(sourceNode == nullptr){
                    sourceNode = new Node(sourceNodeId);
                    this->insertNode(sourceNode);
                }

                if(targetNode == nullptr){
                    targetNode = new Node(targetNodeId);
                    this->insertNode(targetNode);
                }

                Edge* edgeSourceToTarget = new Edge(sourceNode->getId(), targetNode->getId());
                Edge* edgeTargetToSource = new Edge(targetNode->getId(), sourceNode->getId());
                sourceNode->insertEdge(edgeSourceToTarget);
                targetNode->insertEdge(edgeTargetToSource);
            }

            if(readValue == "DIMENSION"){
                isDimensionReadTime = true; 
            } else if(readValue == "GRAPH"){
                isGraphReadTime = true; 
            }
        }
    }
}

void Graph::saveAdjacencyListToFile(string filePath) {
    ofstream file(filePath);

    if (!file.is_open()) {
        cerr << "Erro ao abrir o arquivo: " << filePath << endl;
        return;
    }

    Node* currentNode = this->rootNode;
    while (currentNode != nullptr) {
        file << currentNode->getId();
        Edge* currentEdge = currentNode->getFirstEdge();
        while (currentEdge != nullptr) {
            file << " -> " << currentEdge->getDestinationNodeId();
            currentEdge = currentEdge->getNextEdge();
        }
        file << endl;
        currentNode = currentNode->getNextNode();
    }

    file.close();
    cout << "Lista de adjacência salva em " << filePath << endl;
}

