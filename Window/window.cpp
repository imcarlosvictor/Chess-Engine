#include "window.h"

#include <stdio.h>
#include <cstdio>
#include <iostream>


Window::Window(int width, int height) {
	this->width_ = width;
	this->height_ = height;
	this->isRunning_ = true;
	this->renderer = NULL;
	this->window = NULL;

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
		isRunning_ = false;
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
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
		SDL_RenderClear(this->renderer);
		SDL_RenderCopy(renderer, texture, NULL, NULL);
		SDL_RenderPresent(this->renderer);
	}
	isRunning_ = true;
}

