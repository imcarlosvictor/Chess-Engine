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

		SDL_Renderer* get_renderer();
		SDL_Window* get_window();
		SDL_Texture* get_texture();
		SDL_Event get_event();
		int get_height();
		int get_width();
		bool IsProgramRunning();


	private:
	 	SDL_Renderer *renderer;
	 	SDL_Window *window; 
	 	SDL_Texture *texture;
	 	SDL_Event event;
		int height_;
		int width_;
		bool is_running_;
};
