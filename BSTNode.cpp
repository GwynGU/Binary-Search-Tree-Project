/*
	Author: Gwyn Gras-Usry
	Date: 3/19/22
	Description: BSTNode functions
*/


#include "BSTNode.hpp"


BSTNode::BSTNode(char c, string code, BSTNode* left, BSTNode* right) {
	leftNode = left;
	rightNode = right;
	data.setMorseCode(code);
	data.setCharacter(c);
}

void BSTNode::setLeftNode(BSTNode* newLeft) {
	leftNode = newLeft;
}

void BSTNode::setRightNode(BSTNode* newRight) {
	rightNode = newRight;
}

void BSTNode::setMorseCode(string newMorse) {
	data.setMorseCode(newMorse);
}

void BSTNode::setCharacter(char newChar) {
	data.setCharacter(newChar);
}

BSTNode* BSTNode::getLeftNode() const {
	return leftNode;
}

BSTNode* BSTNode::getRightNode() const {
	return rightNode;
}

string BSTNode::getMorseCode() const {
	return data.getMorseCode();
}

char BSTNode::getCharacter() const {
	return data.getCharacter();
}