#include <iostream>
#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
#include <vector>
#include "game.h"
#include "render.h"
#include "vec2.h"

#define WINDOW_WIDTH 1280
#define WINDOW_HEIGHT 720

int main(int argc, char* argv[]) {
    if(SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        printf("Error initializing SDL!");
        return 1;
    }

    SDL_Window *window = SDL_CreateWindow("Synapse", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);
    if(!window) {
        printf("Error creating window!");
        return 1;
    }

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if(!renderer) {
        printf("Error creating renderer!");
        return 1;
    }

    Game game;
    Graph& view = game.view;
    Vec2 vec(100, 200);
    view.insert(Vec2(440, 20));
    view.insert(Vec2(90, 30));
    view.insert(Vec2(20, 60));
    view.insert(Vec2(400, 700));
    view.insert(Vec2(600, 100));

    view.connect(0, 3);
    view.connect(1, 3);
    view.connect(3, 2);
    view.connect(2, 4);
    view.connect(0, 2);

    Renderer r;
    r.draw(game, renderer);

    SDL_Delay(2000);

    SDL_DestroyWindow(window);
    SDL_Quit();
}
