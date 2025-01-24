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

void Graph::creatChartByFile(string filePath){
    ifstream archive(filePath);
    
    if (!archive.is_open()){
        cerr << "FileError: Não foi possível abrir o arquivo:" << filePath  << " !" << endl;
        return;
    }

    string line;
    string readValue;
    
    while (getline(archive, line)){
        istringstream iss(line);

        if (!line.empty()){
            iss >> readValue;
            
            if(readValue == "DIMENSION"){
                int dimension = 0;
                iss >> readValue;
                dimension = stoi(readValue);
                this->setDimension(dimension); 
            }
        }
    }
}

