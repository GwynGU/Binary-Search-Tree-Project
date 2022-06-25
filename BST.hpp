/*
    Author: Gwyn Gras-Usry
    Date: 3/19/22
    Description: BST header
*/

#pragma once 


#include "BSTNode.hpp"

class BST {
public:
    BST();
    ~BST();
    void destroyTree(BSTNode* pTree);
    void insert(Data& newData);
    void insert(BSTNode* pTree, Data& newData);
    void print(void);
    void print(BSTNode* pTree);
    string search(char c);
    string search(BSTNode* pTree, char c);
private:
    BSTNode* mpRoot;
};

void convertToMorse(fstream& filestream);