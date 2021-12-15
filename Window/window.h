#pragma once
#include <stdio.h>
#include <cstdio>
#include <iostream>
#include "SDL.h"
#include "../Game/board.h"



class Window
{
	public:
		Window ();
		~Window();

		void CreateWindow();
		void DisplayChessBoard();

		SDL_Renderer getRenderer();
		SDL_Window getWindow();
		SDL_Texture getTexture();
		SDL_Event getEvent();
		int getheight();
		int getWidth();
		bool isProgramRunning();


	private:
	 	SDL_Renderer *renderer;
	 	SDL_Window *window; 
	 	SDL_Texture *texture;
	 	SDL_Event event;
		int height_;
		int width_;
		bool isRunning_;
};
