#include "include/board.h"


ChessBoard::ChessBoard() {
	CreateChessBoard();
}

void ChessBoard::CreateChessBoard() {
	// Parameters of the square
	int x_pos = 0, y_pos = 0;
	int width, height = 50;
	// Loop and create 64 squares
	std::string alpha[] = {"a", "b", "c", "d", "e", "f", "g", "h"};
	std::string numeric[] = {"1", "2", "3", "4", "5", "6", "7", "8"};
	
	for (size_t i = 0; i < 64; i++) {
		// Create the coordinate for the square
		std::string coord = alpha[i] + numeric[i];
		// Create a square
		if (i == 0 || i % 2 == 0) {
			/* White Square */ 
			SDL_Rect *coord;
			SDL_SetRenderDrawColor(Window::renderer, 0, 0, 0, 255);
			SDL_RenderFillRect(Window::renderer, coord);
			/* square.x = */ 
		} else {
			/* Black Square */
			SDL_Rect *coord;
			SDL_SetRenderDrawColor(Window::renderer, 255, 255, 255, 0);
			SDL_RenderFillRect(Window::renderer, coord);
		}
		// Adjust coordinates of the square
		if (i % 8 == 0) {
			x_pos = 0;
			y_pos += 50;
		} else {
			x_pos += 50;
		}
	}
}


