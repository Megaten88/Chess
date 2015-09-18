#include "piece.hpp" 
#include "queen.hpp" 
#include <string> 
#include <iostream>
#include <sstream>

using namespace std;

Queen::Queen(char color, int x, int y):Piece(color, x, y){
}
bool Queen::isValidMove(Piece*** board, Position destiny){
	if (Rook::isValidMove(board, destiny)||Bishop::isValidMove(board, destiny))
		return true;
	else
		return false;
}
string Queen::toString()const{
	stringstream ss;
	if (color == 'N'){
		ss << "T";
	}
	else{
		ss << "t";
	}
	return ss.str();
}