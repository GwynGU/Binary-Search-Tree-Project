/*
    Author: Gwyn Gras-Usry
    Date: 3/19/22
    Description: BST node header
*/

#pragma once 

#include "Data.hpp"

class BSTNode {
public:
    BSTNode(char c = ' ', string code = " ", BSTNode* left = nullptr, BSTNode* right = nullptr);
    void setLeftNode(BSTNode* newLeft);
    void setRightNode(BSTNode* newRight);
    void setMorseCode(string newMorse);
    void setCharacter(char newChar);
    BSTNode* getLeftNode() const;
    BSTNode* getRightNode() const;
    string getMorseCode() const;
    char getCharacter() const;

private:
    BSTNode* leftNode;
    BSTNode* rightNode;
    Data data;
};

