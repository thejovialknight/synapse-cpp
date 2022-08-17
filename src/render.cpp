#include <iostream>
#include "render.h"

void Renderer::draw(Game &game, SDL_Renderer *renderer) {
    SDL_SetRenderDrawColor(renderer, 235, 235, 235, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 100, 20, 20, SDL_ALPHA_OPAQUE);
    for(auto &node : game.nodes) {
        SDL_RenderDrawLine(
            renderer, 
            node.position.x - 4,
            node.position.y - 4,
            node.position.x + 4,
            node.position.y + 4
        );

        std::cout << "Node rendering with position of " << node.position.x << ", " << node.position.y << "!" << std::endl;
    }

    SDL_SetRenderDrawColor(renderer, 20, 20, 20, SDL_ALPHA_OPAQUE);
    for(auto &edge : game.edges) {
        Node &start = game.nodes[edge.start];
        Node &end = game.nodes[edge.end];
        SDL_RenderDrawLine(
            renderer, 
            start.position.x,
            start.position.y,
            end.position.x,
            end.position.y
        );

        std::cout << "Edge rendering with start of " << start.position.x << ", " << start.position.y << " | end of " << end.position.x << ", " << end.position.y << "!" << std::endl;
    }

    SDL_RenderPresent(renderer);
}
