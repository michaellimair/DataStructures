#include <iostream>
#include "implementation/btree.cpp"

using std::cout;
using std::endl;

int main() {
    BTree *btr = new BTree();

    btr->InsertNode('A');
    btr->InsertNode('B');
    btr->InsertNode('C');
    btr->InsertNode('D');
    btr->InsertNode('E');
    btr->InsertNode('F');
    btr->InsertNode('G');
    btr->InsertNode('H');
    btr->InsertNode('I');

    BTree *btr2 = new BTree();

    btr2->InsertNode('A');
    btr2->InsertNode('B');
    btr2->InsertNode('C');
    btr2->InsertNode('D');
    btr2->InsertNode('E');
    btr2->InsertNode('F');
    btr2->InsertNode('G');
    btr2->InsertNode('H');
    btr2->InsertNode('I');

    cout << "Height: " << btr->height(btr->getRoot()) << endl;
    cout << "Count Leaf: " << btr->count_leaf(btr->getRoot()) << endl;

    // cout << btr->getRoot()->getData();
    btr->PreorderTraversal();

    cout << "Insert successful\n";

    btr->PreorderTraversal();
    cout << endl;

    cout << "PreorderTraversal successful\n";

    btr->InorderTraversal();
    cout << endl;

    cout << "InorderTraversal successful\n";

    return 0;
}