#include "board.h"


ChessBoard::ChessBoard() {
	CreateChessBoard();
}

void ChessBoard::CreateChessBoard() {
	// Grab private member
	SDL_Renderer = Window::getRenderer();
	// Create 64 squares
	SDL_Rect *squares = new SDL_Rect[64];
	SDL_SetRenderDrawColor(wRender, 255, 255, 255, 255);
	SDL_RenderFillRect(wRender, squares);
	
	// Color each square in relation to their position on the board
	/* for (size_t i = 0; i < 64; i++) { */
	/* 	// Even squares */
	/* 	if (i = 0 || i % 2 == 0) { */
	/* 		SDL_Rect *square = new SDL_Rect; */
	/* 		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); */
	/* 		SDL_RenderFillRect(renderer, &squares[i]); */
	/* 	} else { */
	/* 		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); */
	/* 		SDL_RenderFillRect(renderer, &squares[i]); */
	/* 	} */
	/* } */
}


