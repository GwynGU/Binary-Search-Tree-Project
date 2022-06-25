/*
	Author: Gwyn Gras-Usry
	Date: 3/19/22
	Description: BST functions
*/


#include "BST.hpp"

BST::BST() {
	mpRoot = nullptr;
	fstream fileStream("MorseTable.txt");
	char line[100];
	Data newData; 
	while (!fileStream.eof()) {
		fileStream.getline(line, 100, ' ');
		newData.setCharacter(line[0]);
		fileStream.getline(line, 100, '\n');
		newData.setMorseCode(line);
		insert(newData);
	}
	fileStream.close();
}

BST::~BST() {
	this->destroyTree(this->mpRoot);
}

void BST::destroyTree(BSTNode* pTree) {
	if (pTree != nullptr){
		destroyTree(pTree->getLeftNode());
		destroyTree(pTree->getRightNode());
		delete pTree;
	}
}

void BST::insert(Data &newData) {
	insert(this->mpRoot, newData);
}

void BST::insert(BSTNode* pTree, Data& newData) {
	if (pTree == nullptr) { // empty tree
		this->mpRoot = new BSTNode(newData.getCharacter(), newData.getMorseCode());
	}
	else {
		if ((*pTree).getCharacter() < newData.getCharacter()) {
			if (pTree->getRightNode() == nullptr) {
				pTree->setRightNode(new BSTNode(newData.getCharacter(), newData.getMorseCode()));
			}
			else {
				insert(pTree->getRightNode(), newData);
			}
		}
		else if ((*pTree).getCharacter() > newData.getCharacter()) {
			if (pTree->getLeftNode() == nullptr) {
				pTree->setLeftNode(new BSTNode(newData.getCharacter(), newData.getMorseCode()));
			}
			else {
				insert(pTree->getLeftNode(), newData);
			}
		}
	}
}

void BST::print(void) {
	print(this->mpRoot);
	cout << endl;
}

void BST::print(BSTNode* pTree) {
	if (pTree != nullptr) {
		print(pTree->getLeftNode());
		cout << pTree->getCharacter() << ", ";
		print(pTree->getRightNode());
	}
}

string BST::search(char c) {
	string s = search(this->mpRoot, c);
	return s;
}

string BST::search(BSTNode* pTree, char c) {
	string result = " ";

	if (pTree == nullptr) { // empty tree
		return " ";
	}
	else {
		if ((*pTree).getCharacter() == c) {
			return (*pTree).getMorseCode();
		}
		else if (c > (*pTree).getCharacter()) { // go right
			return search(pTree->getRightNode(), c);
		}
		else if (c < (*pTree).getCharacter()) { // go left
			return search(pTree->getLeftNode(), c);
		}
	}
}

void convertToMorse(fstream& filestream) {
	char line[100];
	int i = 0;
	BST bst;
	filestream.getline(line, 100, '\n');
	while (!filestream.eof()) {
		while (line[i] != '\n') {
			cout << bst.search(toupper(line[i])) << " ";
			i++;
		}
		i = 0;
		filestream.getline(line, 100, '\n');
		cout << endl;
	}
}