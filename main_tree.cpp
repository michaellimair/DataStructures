#include <iostream>
#include "implementation/btree.cpp"

using std::cout;
using std::endl;

int main() {
    BTree<char> *btr = new BTree<char>();

    btr->Insert('E');
    btr->Insert('A');
    btr->Insert('H');
    btr->Insert('F');
    btr->Insert('I');

    cout << "Height: " << btr->height(btr->getRoot()) << endl;
    cout << "Count Leaf: " << btr->count_leaf(btr->getRoot()) << endl;
    cout << "Count Nodes: " << btr->count_nodes() << endl;

    cout << "PreorderTraversal:\n";
    btr->PreorderTraversal();
    cout << endl << endl;

    cout << "InorderTraversal:\n";
    btr->InorderTraversal();
    cout << endl << endl;

    return 0;
}