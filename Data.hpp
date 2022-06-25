/*
    Author: Gwyn Gras-Usry
    Date: 3/19/22
    Description: data header
*/

#pragma once 

#include <string>
#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::fstream;
using std::istream;
using std::ostream;
using std::string;

class Data {
public:
    Data(string code = " ", char c = ' ');
    Data(const Data& copy);
    string getMorseCode() const;
    char getCharacter() const;
    void setMorseCode(string code);
    void setCharacter(char c);

private:
    string morseCode;
    char character;
};