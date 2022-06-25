/*
	Author: Gwyn Gras-Usry
	Date: 3/19/22
	Description: main
*/

#include "BST.hpp"

int main(void) {
	BST test;
	cout << "Printing current tree: " << endl;
	test.print();

	fstream fileStream("Convert.txt");
	convertToMorse(fileStream);
	fileStream.close();

	return 0;
}