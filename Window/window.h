#pragma once
#include "SDL.h"
#include "SDL_rect.h"

/* #include "Window.cpp" */

class Window
{
	public:
		Window ();
		~Window();

		void CreateWindow();

		void CreateChessBoard();

	private:
		int height_;
		int width_;
		bool isRunning_;
		SDL_Renderer *renderer;
		SDL_Window *window; 
		SDL_Texture *texture;
		SDL_Event event;
};
