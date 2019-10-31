#include <string>
#include <iostream>
#include "List.h"
#include "ListNode.cpp"

using std::string;
using std::cout;
using std::endl;

List::List(string aName = string()) {
    name = aName;
    first = new ListNode(-1); // dummy header node
    first->set_Next(first);
};

void List::insert(ListNode *newNode) {
    ListNode *p = first->get_Next();
    while (p->get_Next() != first && newNode->getData() > p->get_Next()->getData()) {
        p = p->get_Next();
    }
    newNode->set_Next(p->get_Next());
    p->set_Next(newNode);
}

int List::count() {
    int result = 0;
    ListNode *p = first->get_Next();
    while (p != first) {
        result++;
        p = p->get_Next();
    }
    return result;
}

void List::print() {
    ListNode *p = first->get_Next();
    while (p != first) {
        cout << p->getData() << ' ';
        p = p->get_Next();
    }
    cout << endl;
}

ListNode* List::search(int data) {
    ListNode *p = first->get_Next();
    while (p != first) {
        if (p -> getData() == data) {
            return p;
        }
        p = p->get_Next();
    }
    return NULL;
}

void List::pop(ListNode *q) {
    ListNode *p = first->get_Next();
    while(p->get_Next() != q && p->get_Next() != first) {
        p = p->get_Next();
    }
    p->set_Next(q->get_Next());
}
