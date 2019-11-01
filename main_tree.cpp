#include <iostream>
#include "implementation/btree.cpp"

using std::cout;
using std::endl;

int main() {
    BTree *btr = new BTree();

    btr->InsertNode('E');
    btr->InsertNode('A');
    btr->InsertNode('H');
    btr->InsertNode('F');
    btr->InsertNode('I');

    cout << "Height: " << btr->height(btr->getRoot()) << endl;
    cout << "Count Leaf: " << btr->count_leaf(btr->getRoot()) << endl;

    cout << "PreorderTraversal:\n";
    btr->PreorderTraversal();
    cout << endl << endl;

    cout << "InorderTraversal:\n";
    btr->InorderTraversal();
    cout << endl << endl;

    return 0;
}