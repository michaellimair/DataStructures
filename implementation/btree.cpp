#include "btree.h"
#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;

BTree::BTree() {
    root = NULL;
}

void BTree::InsertNode(char data) {
    if (root != NULL) {
        InsertNode(data, root);
    } else {
        root = new TreeNode;
        root->insert(data);
    }
}

void BTree::InsertNode(char data, TreeNode *p) {
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

int BTree::height(TreeNode *parent) {
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

int BTree::count_leaf(TreeNode *p) {
    if (p == NULL) {
        return 0;
    } else if (p->getLeft() == NULL && p->getRight() == NULL) {
        return 1;
    } else {
        return count_leaf(p->getLeft()) + count_leaf(p->getRight());
    }
}

TreeNode *BTree::getRoot() {
    return root;
}

bool BTree::equal(BTree *T) {
    return root->equal(T->getRoot());
}

void BTree::PreorderHelper(TreeNode *node) {
    if (node != NULL) {
        cout << node->getData() << ' ';
        PreorderHelper(node->getLeft());
        PreorderHelper(node->getRight());
    }
}

void BTree::PreorderTraversal() {
    PreorderHelper(root);
}

void BTree::InorderHelper(TreeNode *node) {
    if (node != NULL) {
        InorderHelper(node->getLeft());
        cout << node->getData() << ' ';
        InorderHelper(node->getRight());
    }
}

void BTree::InorderTraversal() {
    InorderHelper(root);
}

void BTree::PostorderHelper(TreeNode *node) {
    if (node != NULL) {
        PostorderHelper(node->getLeft());
        PostorderHelper(node->getRight());
        cout << node->getData() << ' ';
    }
}

void BTree::PostorderTraversal() {
    PostorderHelper(root);
}
