#include "TreeNode.h"
#include <cstdlib>
#include <iostream>

TreeNode::TreeNode() {
    left = NULL;
    right = NULL;
}

void TreeNode::setLeft(char dataL) {
    left = new TreeNode();
    left->insert(dataL);
}

void TreeNode::setRight(char dataR) {
    right = new TreeNode();
    right->insert(dataR);
}

TreeNode *TreeNode::getLeft() {
    return left;
}

TreeNode *TreeNode::getRight() {
    return right;
}

void TreeNode::insert(char data) {
    this->info = data;
    // std::cout << getData();
}

char TreeNode::getData() {
    return info;
}

bool TreeNode::equal(TreeNode* TN) {
    if (this == NULL && TN == NULL) {
        return true;
    }
    if (this != NULL && TN == NULL) {
        return false;
    }
    if (this == NULL && TN != NULL) {
        return false;
    }
    if (this->info == TN->getData()) {
        if (this->getLeft()->equal(TN->getLeft()) && this->getRight()->equal(TN->getRight())) {
            return true;
        }
    }
    return false;
}
