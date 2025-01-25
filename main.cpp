#include <iostream>
#include "./include/Graph.h"
using namespace std;

int main(){
    Graph* graph = new Graph();

    graph->creatGraphByFile("./instances/graph_1.txt");
    graph->saveAdjacencyListToFile("./instances_adjacency_list_files/graph_1.txt");
    
    return 0;
}