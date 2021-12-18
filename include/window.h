#pragma once
#include <stdio.h>
#include <cstdio>
#include <iostream>

#include "SDL.h"
#include "board.h"


class Window
{
	public:
		Window ();
		~Window();

		void CreateWindow();
		void DisplayChessBoard();

		int get_height();
		int get_width();
		bool IsProgramRunning();

	 	static SDL_Renderer *renderer;
	 	static SDL_Window *window; 
	 	static SDL_Texture *texture;
	 	static SDL_Event event;

	private:
		int height_;
		int width_;
		bool is_running_;
};
