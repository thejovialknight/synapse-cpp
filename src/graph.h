#pragma once
#include <unordered_set> 
#include <unordered_map> 
#include "table.h"
#include "vec2.h"

// The graph serves two purposes, as a holder of nodes, and as a graph node itself
// The design is an adjacency list for optimal speed of mutation and traversal
struct Graph {
    std::unordered_set<int> outs; // Nodes the graph is directed to. Subgraph references
    std::unordered_map<int, Graph*> subgraph; // Each node contains a subgraph of its own nodes
    int tail_node_key = -1; // Iterated and used as key in new subgraph nodes
    Vec2 position = Vec2(0, 0); // Physical position in world space, not related to graph structure

    Graph* insert();
    Graph* insert(Vec2 pos);
    void remove(int node_index);
    void connect(int from, int to);
};

