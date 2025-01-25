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
                cout<<readValue<<"\n";
            }

            if(readValue == "DIMENSION"){
                isDimensionReadTime = true; 
            } else if(readValue == "GRAPH"){
                isGraphReadTime = true; 
            }
        }
    }
}

