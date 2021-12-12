#pragma once
#include "SDL.h"

/* #include "Window.cpp" */

class Window
{
	public:
		Window (int, int);
		~Window();

		void CreateWindow();

	private:
		int height_;
		int width_;
		bool isRunning_;
		SDL_Renderer* renderer;
		SDL_Window* window; 
};
