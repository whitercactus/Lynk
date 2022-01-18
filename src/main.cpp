#include <SDL2/SDL.h>
#include <iostream>

int main(int argc, char **argv)
{
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		std::cout << "Failed to init SDL\n" << std::endl;
		return -1;
	}

	SDL_Window *window = SDL_CreateWindow("Lynk", SDL_WINDOWPOS_UNDEFINED,
					      SDL_WINDOWPOS_UNDEFINED, 680, 450,
					      SDL_WINDOW_SHOWN);

	if (window == nullptr) {
		std::cout << "Failed to init window\n" << std::endl;
		return -1;
	}

	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);

	if (renderer == nullptr) {
		std::cout << "Failed to load renderer\n" << std::endl;
		return -1;
	}

	bool isRunning = true;
	while (isRunning) {
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				SDL_Quit();
				isRunning = false;
			}
		}
	}

	return 0;
}
