#pragma once
#include <stdio.h>
#include <cstdio>
#include <string>

#include "SDL_rect.h"
#include "window.h"
#include "pieces.h"


class ChessBoard
{
	public:
		ChessBoard();
		~ChessBoard();

		void CreateChessBoard();
};

class ChessTile
{
	public:
		ChessTile();
		~ChessTile();

		Piece AddPiece(Piece);
		void RemovePiece();

	private:
		long piece_on_tile;
};
