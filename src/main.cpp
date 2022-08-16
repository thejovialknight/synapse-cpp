#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
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

    Vec2 vec_a(20.0, 11.0);

    SDL_Delay(5000);

    SDL_DestroyWindow(window);
    SDL_Quit();
}
