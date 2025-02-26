#ifndef SOLUTION_H
#define SOLUTION_H
#include <iostream>
#include <list>
#include <functional>
#include "Graph.h"
#include "Tree.h"
#include "Node.h"

using namespace std;

struct Color{
    string name;
    int id;
    int usedTimesCounter;
};

struct Rule {
    function<bool(Node*)> rule;
};

struct Color{
    string name;
    int id;
    int usedTimesCounter;
};


struct Solution{
    Graph* graph;
    list<Node*> solutionArray;
    int cost = 0;
    Tree* tree;
};

class Graph;
class Tree;
class Node;

class Solver {
    private:
        list<Color> colors;
        list<Rule> rules;
        Graph* graph;     
        Tree* tree;

    public:
        Solver(list<Color> colors, Graph* graph);
        ~Solver();

        Solution backTRacking();

};

#endif // SOLUTION_H