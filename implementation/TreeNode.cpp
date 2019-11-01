#include "TreeNode.h"
#include <cstdlib>
#include <iostream>

template <class T>
TreeNode<T>::TreeNode() {
    left = NULL;
    right = NULL;
}

template <class T>
void TreeNode<T>::setLeft(T const &dataL) {
    left = new TreeNode();
    left->insert(dataL);
}

template <class T>
void TreeNode<T>::setRight(T const &dataR) {
    right = new TreeNode();
    right->insert(dataR);
}

template <class T>
TreeNode<T> *TreeNode<T>::getLeft() {
    return left;
}

template <class T>
TreeNode<T> *TreeNode<T>::getRight() {
    return right;
}

template <class T>
void TreeNode<T>::insert(T const &data) {
    this->info = data;
    // std::cout << getData();
}

template <class T>
T TreeNode<T>::getData() {
    return info;
}

template <class T>
bool TreeNode<T>::equal(TreeNode* TN) {
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
