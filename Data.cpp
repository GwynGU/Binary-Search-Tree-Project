/*
	Author: Gwyn Gras-Usry
	Date: 3/19/22
	Description: Data functions
*/

#include "Data.hpp"

Data::Data(string code, char c) {
	morseCode = code;
	character = c;
}

Data::Data(const Data& copy) {
	morseCode = copy.morseCode;
	character = copy.character;
}

string Data::getMorseCode() const {
	return morseCode;
}

char Data::getCharacter() const {
	return character;
}

void Data::setMorseCode(string code) {
	morseCode = code;
}

void Data::setCharacter(char c) {
	character = c;
}
