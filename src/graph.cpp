#include "graph.h"
#include <iostream>

// Inserts a node into the subgraph. Returns the node's table index
Graph* Graph::insert() {
    Graph* node = new Graph();
    tail_node_key++; 
    subgraph.insert({tail_node_key, node});
    return node;
}

Graph* Graph::insert(Vec2 pos) {
    Graph* node = insert();
    node->position = pos;
    return node;
}

// Removes a node from the subgraph
void Graph::remove(int node_index) {
    for(auto &subnode_pair : subgraph) {
        subnode_pair.second->outs.erase(node_index);
    }

    subgraph.erase(node_index);
}

// Connects the 'from' node to the 'to' node within the subgraph
void Graph::connect(int from, int to) {
    if(subgraph.find(from) == subgraph.end()) {
        std::cout << "Connection failed from " << from << " to " << to << std::endl;
        return;
    }
    
    subgraph[from]->outs.insert(to);
}
