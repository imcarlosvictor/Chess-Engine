#include "pieces.h"

Piece::Piece(std::string name, Color color, int value, int pos_val[64]) {
	set_piece(name);
	set_color(color);
	set_material_value(value);
	set_positional_value(arr);
}

Piece::~Piece {
	delete Piece;
}

void Piece::Move() {

}

bool Piece::IsMoveValid() {

}

void Piece::Capture() {

}

void Piece::Promote(Piece new_piece) {

}

void Piece::set_piece(std::string name) const {
	this->piece_ = name;
}

void Piece::set_color(Color color) const {
	this->color_ = color;
}

void Piece::set_material_value(int value) const {
	this->set_material_value = value;
}

void Piece::set_positional_value(int &pos_val[64]) const {
	this->positional_value = pos_val;
}
