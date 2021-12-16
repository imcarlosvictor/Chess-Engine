#include <string>

enum Color 
{
	WHITE,
	BLACK,
};

class Piece
{
	public:
		Piece(std::string, int, int, int arr[64]);
		~Piece();

		void Move();
		bool IsMoveValid();
		void Capture();
		void Promote(Piece);

		void set_piece(std::string) const;
		void set_color(int) const;
		void set_material_value(int) const;
		void set_positional_value(int arr[64]) const;

	private:
		const std::string piece_;
		const Color color_;
		const std::string material_value_;
		int *positional_value[64];
};
