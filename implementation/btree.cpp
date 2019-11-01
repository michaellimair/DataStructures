#include "btree.h"
#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;

template <class T>
BTree<T>::BTree() {
    root = NULL;
    numberOfNodes = 0;
}

template <class T>
void BTree<T>::Insert(T const &data) {
    if (root != NULL) {
        InsertNode(data, root);
    } else {
        root = new TreeNode<T>();
        root->insert(data);
    }
    numberOfNodes++;
}

template <class T>
void BTree<T>::InsertNode(T const &data, TreeNode<T> *p) {
    // BTree with content
    if (data < p->getData()) {
        if (p->getLeft() != NULL) {
            // Insert to left of left child if not null
            InsertNode(data, p->getLeft());
        } else {
            // Set the left
            p->setLeft(data);
        }
    } else if (data > p->getData()) {
        if (p->getRight() != NULL) {
            // Insert to right of right child if not null
            InsertNode(data, p->getRight());
        } else {
            // Set the right
            p->setRight(data);
        }
    }
}

template <class T>
int BTree<T>::height(TreeNode<T> *parent) {
    int HeightOfLeftSubBTree, HeightOfRightSubBTree;
    if (parent == NULL) return 0; // empty tree
    if ((parent->getLeft() == NULL) && (parent->getRight() == NULL)) return 0; // tree with parent only

    HeightOfLeftSubBTree = height(parent->getLeft());
    HeightOfRightSubBTree = height(parent->getRight());
    if (HeightOfLeftSubBTree >= HeightOfRightSubBTree) {
        return HeightOfLeftSubBTree + 1;
    } else {
        return HeightOfRightSubBTree + 1;
    }
}

template <class T>
int BTree<T>::count_leaf(TreeNode<T> *p) {
    if (p == NULL) {
        return 0;
    } else if (p->getLeft() == NULL && p->getRight() == NULL) {
        return 1;
    } else {
        return count_leaf(p->getLeft()) + count_leaf(p->getRight());
    }
}

template <class T>
int BTree<T>::count_nodes() {
    return numberOfNodes;
}

template <class T>
TreeNode<T> *BTree<T>::getRoot() {
    return root;
}

template <class T>
bool BTree<T>::equal(BTree<T> *otherTree) {
    return root->equal(otherTree->getRoot());
}

template <class T>
void BTree<T>::PreorderHelper(TreeNode<T> *node) {
    if (node != NULL) {
        cout << node->getData() << ' ';
        PreorderHelper(node->getLeft());
        PreorderHelper(node->getRight());
    }
}

template <class T>
void BTree<T>::PreorderTraversal() {
    PreorderHelper(root);
}

template <class T>
void BTree<T>::InorderHelper(TreeNode<T> *node) {
    if (node != NULL) {
        InorderHelper(node->getLeft());
        cout << node->getData() << ' ';
        InorderHelper(node->getRight());
    }
}

template <class T>
void BTree<T>::InorderTraversal() {
    InorderHelper(root);
}

template <class T>
void BTree<T>::PostorderHelper(TreeNode<T> *node) {
    if (node != NULL) {
        PostorderHelper(node->getLeft());
        PostorderHelper(node->getRight());
        cout << node->getData() << ' ';
    }
}

template <class T>
void BTree<T>::PostorderTraversal() {
    PostorderHelper(root);
}
