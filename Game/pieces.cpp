#include "pieces.h"

ChessPiece::ChessPiece(Pieces piece, Color color, MaterialValue value, int pos_val[64]) {
	set_piece(piece);
	set_color(color);
	set_material_value(value);
	set_positional_value(arr);
}

ChessPiece::~ChessPiece {
	delete ChessPiece;
}

void ChessPiece::Move() {

}

bool ChessPiece::IsMoveValid() {

}

void ChessPiece::Capture() {

}

void ChessPiece::Promote(Pieces new_piece) {

}

void ChessPiece::set_piece(Pieces piece) const {
	this->piece_ = name;
}

void ChessPiece::set_color(Color color) const {
	this->color_ = color;
}

void ChessPiece::set_material_value(MaterialValue value) const {
	this->set_material_value = value;
}

void ChessPiece::set_positional_value(int &pos_val[64]) const {
	this->positional_value = pos_val;
}
