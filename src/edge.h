#pragma once
#include "node.h"

struct Edge {
    int start;
    int end;
    
    Edge(int start, int end) : start(start), end(end) {}
};
