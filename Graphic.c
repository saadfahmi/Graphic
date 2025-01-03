#include <stdio.h>
#include <SDL2/SDL.h>
#include <stdlib.h>
void print_random_data(SDL_Surface *surface)
{
        int num_pixel = surface->w * surface->h;
        Uint32 *pixels = (Uint32 *) surface->pixels;
        for(int i = 0; i<= num_pixel; i++)
        {
                pixels[i] = (Uint32) rand();

        }



}

int main()
{
        SDL_Init(SDL_INIT_VIDEO);
        SDL_Window *window = SDL_CreateWindow("Broken Monitor", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800,700, 0);
        SDL_Surface *surface =  SDL_GetWindowSurface(window);
        SDL_Event event;
        int running = 1;
        while(running)
        {
                SDL_PollEvent(&event);
                if(event.type == SDL_QUIT)
                running = 0;
                print_random_data(surface);
                SDL_UpdateWindowSurface(window);
                SDL_Delay(100);
        }
        


}
