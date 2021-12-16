#include "board.h"


ChessBoard::ChessBoard() {
	CreateChessBoard();
}

void ChessBoard::CreateChessBoard() {
	/* /1* // Grab private member *1/ */
	/* /1* SDL_Renderer = Window::getRenderer(); *1/ */
	/* /1* // Create 64 squares *1/ */
	/* /1* SDL_Rect *squares = new SDL_Rect[64]; *1/ */
	/* /1* SDL_SetRenderDrawColor(wRender, 255, 255, 255, 255); *1/ */
	/* /1* SDL_RenderFillRect(wRender, squares); *1/ */
	
	/* // Color each square in relation to their position on the board */
	/* /1* for (size_t i = 0; i < 64; i++) { *1/ */
	/* /1* 	// Even squares *1/ */
	/* /1* 	if (i = 0 || i % 2 == 0) { *1/ */
	/* /1* 		SDL_Rect *square = new SDL_Rect; *1/ */
	/* /1* 		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); *1/ */
	/* /1* 		SDL_RenderFillRect(renderer, &squares[i]); *1/ */
	/* /1* 	} else { *1/ */
	/* /1* 		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); *1/ */
	/* /1* 		SDL_RenderFillRect(renderer, &squares[i]); *1/ */
	/* /1* 	} *1/ */
	/* /1* } *1/ */

	/* // Parameters of the square */
	/* int x_pos = 0, y_pos = 0; */
	/* int width, height = 50; */
	/* // Loop and create 64 squares */
	/* std::string alpha[] = {"a", "b", "c", "d", "e", "f", "g", "h"}; */
	/* std::string numeric[] = {"1", "2", "3", "4", "5", "6", "7", "8"}; */
	
	/* for (size_t i = 0; i < 64; i++) { */
	/* 	// Create the coordinate for the square */
	/* 	std::string &coord = alpha[i] + numeric[i]; */
	/* 	// Create a square */
	/* 	if (i == 0 || i % 2 == 0) { */
	/* 		/1* SDL_Rect *1/ */ 
	/* 	} else { */
	/* 		/1* SDL_Rect *1/ */
	/* 	} */
	/* 	// Adjust coordinates of the square */
	/* 	if (i % 8 == 0) { */
	/* 		x_pos = 0; */
	/* 		y_pos += 50; */
	/* 	} else { */
	/* 		x_pos += 50; */
	/* 	} */
	/* } */
}


