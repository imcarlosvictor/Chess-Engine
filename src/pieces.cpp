#include "include/pieces.h"

Piece::Piece(ChessPieces ch_piece, int pos_val[64]) {
}

/* Piece::~Piece { */
/* 	delete Piece; */
/* } */

void Piece::Move() {

}

bool Piece::LegalMove() {
	return true;
}

void Piece::Capture() {

}

void Piece::Promote(ChessPieces new_piece) {

}

void Piece::set_positional_value(int pos_val[]) const {
	// this->positional_value = pos_val;
}

// Piece get_piece() {
// 	// return this->piece_;
// }

int get_material_value() {
	return 0;
}

int get_positional_value() {
	return 0;
}
