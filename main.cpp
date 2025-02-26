#include <iostream>
#include "./include/Graph.h"
#include "./include/Solver.h"

using namespace std;

int main(){
    Graph* graph = new Graph();
    
    graph->creatGraphByFile("./instances/graph_1.txt");
    graph->saveAdjacencyListToFile("./instances_adjacency_list_files/graph_1.txt");
    
    Rule tryToUseRedColor;
    Rule tryToUseGreenColor;
    Rule tryToUseBlueColor;
    Rule tryToUseYellowColor;
    
    tryToUseRedColor.rule = [](Node*){
        return true;
    };
    tryToUseGreenColor.rule = [](Node*){
        return true;
    };
    tryToUseBlueColor.rule = [](Node*){
        return true;
    };
    tryToUseYellowColor.rule = [](Node*){
        return true;
    };


    return 0;
}