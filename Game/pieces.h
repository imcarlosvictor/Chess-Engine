#include <string>

enum Pieces
{
	PAWN,
	KNIGHT,
	BISHOP,
	ROOK,
	QUEEN,
	KING
};

enum Color 
{
	WHITE,
	BLACK
};

enum MaterialValue
{
	PAWN = 1,
	KNIGHT = 3,
	BISHOP = 3,
	ROOK = 5,
	QUEEN = 9,
	KING = 99
};

class ChessPiece
{
	public:
		ChessPiece(Pieces, Color, int, int arr[64]);
		~ChessPiece();

		void Move();
		bool IsMoveValid();
		void Capture();
		void Promote(Pieces);

		void set_piece(Pieces) const;
		void set_color(Color) const;
		void set_material_value(MaterialValue) const;
		void set_positional_value(int arr[64]) const;

	private:
		const Piece piece_;
		const Color color_;
		const MaterialValue material_value_;
		int *positional_value[64];
};
