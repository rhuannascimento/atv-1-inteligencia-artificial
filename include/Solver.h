#ifndef SOLUTION_H
#define SOLUTION_H
#include <iostream>
#include <functional>
#include "Graph.h"
#include "Tree.h"

using namespace std;

struct Color{
    string name;
    int id;
    int usedTimesCounter;
};

struct Rule{
    function<bool()> rule;
};

struct Color{
    string name;
    int id;
    int usedTimesCounter;
};


struct Solution{
    Graph* graph;
    list<Node*> solutionArray;
    int usedTimesCounter;
};

class Graph;
class Tree;

class Solver {
    private:
        list<Color> colors;
        list<Rule> rules;
        Graph* graph;     
        Tree* tree;

    public:
        Solver(list<Color> colors, Graph* graph);
        ~Solver();

        backTRacking

};

#endif // SOLUTION_H