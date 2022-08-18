#pragma once
#include <SDL2/SDL.h>
#include <vector>
#include <unordered_map>
#include "game.h"

struct Renderer {
    void draw(Game &game, SDL_Renderer *renderer);
};

