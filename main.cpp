#include <iostream>
#include "List.cpp"

using namespace std;

int main() {
    List *l = new List();
    l->print();
    l->insert(new ListNode(1));
    l->insert(new ListNode(3));
    l->insert(new ListNode(4));
    l->insert(new ListNode(6));
    l->pop(l->search(3));
    cout << "Search: " << l->search(4)->getData() << endl;
    cout << "Count: " << l->count() << endl;
    l->print();
    delete l;
    return 0;
}