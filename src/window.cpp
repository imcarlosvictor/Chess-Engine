#include "include/window.h"

Window::Window() {
	this->width_ = 900;
	this->height_ = 700;
	this->is_running_ = true;
	renderer = NULL;
	window = NULL;

	CreateWindow();
}

Window::~Window() {
	// Destroy window instance
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	// Clean up on exit
	SDL_Quit();
}

void Window::CreateWindow() {
	// Initialize SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		fprintf(stderr, "Couldn't initialize SDL: %s\n", SDL_GetError());
		exit(1);
		this->~Window();
		is_running_ = false;
	}

	// Create Screen
	if (SDL_CreateWindowAndRenderer(this->width_, this->height_, 0, &window, &renderer)) {
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't create window and renderer: %s", SDL_GetError());
	}

	while (1) {
		SDL_PollEvent(&event);
		if (event.type == SDL_QUIT) {
			break;
		}
		SDL_SetRenderDrawColor(renderer, 67, 70, 75, 1);
		SDL_RenderClear(renderer);
		SDL_RenderCopy(renderer, texture, NULL, NULL);
		// Display the chess board
		DisplayChessBoard();
		// Update the window
		SDL_RenderPresent(renderer);
		
	}
	is_running_ = true;
}

void DisplayChessBoard() {
	ChessBoard board;
}

