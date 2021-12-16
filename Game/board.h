#pragma once
#include <stdio.h>
#include <cstdio>
#include <string>

#include "SDL_rect.h"
#include "../Window/window.h"


class ChessBoard
{
	public:
		ChessBoard();
		~ChessBoard();

		void CreateChessBoard();
};
