#ifndef SOLUTION_H
#define SOLUTION_H
#include <iostream>
#include <list>
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

class Graph;
class Tree;


class Solution {
    private:
        list<Color> colors;
        list<Rule> rules;
        Graph* graph;     
        Tree* tree;

    public:
        Solution(list<Color> colors, Graph* graph);
        ~Solution();

};

#endif // SOLUTION_H