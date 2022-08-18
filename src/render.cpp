#include <iostream>
#include "render.h"

void Renderer::draw(Game &game, SDL_Renderer *renderer) {
    std::unordered_map<int, Graph*>& view_graph = game.view.subgraph;

    SDL_SetRenderDrawColor(renderer, 235, 235, 235, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 100, 20, 20, SDL_ALPHA_OPAQUE);
    
    for(auto &node_pair : view_graph) {
        Graph* node = node_pair.second;
        Vec2& pos = node->position;
        SDL_Rect rect;
        rect.x = pos.x - 4;
        rect.y = pos.y - 4;
        rect.w = 8;
        rect.h = 8;
        SDL_RenderDrawRect(renderer, &rect);

        for(auto &out : node->outs) {
            Vec2& end_pos = view_graph[out]->position;
            SDL_RenderDrawLine(renderer, pos.x, pos.y, end_pos.x, end_pos.y);
        }
    }

    SDL_RenderPresent(renderer);
}
