#pragma once
#include <string>

enum ChessPieces
{
	// Black
	B_PAWN = -1,
	B_KNIGHT = -3,
	B_BISHOP = -3,
	B_ROOK = -5,
	B_QUEEN = -9,
	B_KING = -100,
	// White
	W_PAWN = 1,
	W_KNIGHT = 3,
	W_BISHOP = 4,
	W_ROOK = 5,
	W_QUEEN = 9,
	W_KING = 100
};

class Piece
{
	public:
		Piece(ChessPieces, int arr[64]);
		~Piece();

		void Move();
		bool LegalMove();
		void Capture();
		void Promote(ChessPieces);
		void set_positional_value(int arr[]) const;
		// std::string get_piece();
		int get_material_value();
		int get_positional_value();
		
	private:
		ChessPieces piece_;
		std::string color_;
		int material_value_;
		int positional_value[];
};
