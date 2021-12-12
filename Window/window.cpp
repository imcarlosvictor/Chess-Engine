#include "window.h"

#include <stdio.h>
#include <cstdio>
#include <iostream>


Window::Window(int width, int height) {
	this->width_ = width;
	this->height_ = height;
	this->isRunning_ = true;
	this->renderer = nullptr;
	this->window = nullptr;

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
	if (SDL_Init(SDL_INIT_VIDEO) == 0) {
		SDL_CreateWindowAndRenderer(this->width_, this->height_, 0, &window, &renderer);
		SDL_RenderClear(this->renderer);
		SDL_RenderPresent(this->renderer);
	} else {
		std::cout << "Could not initialize SDL" << std::endl;
	}
}

