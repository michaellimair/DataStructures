#ifndef ListNode
#include "ListNode.cpp"
#include "stack.h"

MyStack::MyStack() {
    topNode = NULL;
    stackSize = 0;
}

void MyStack::pop() {
    topNode = topNode->get_Next();
    stackSize--;
}

void MyStack::push(int newItem) {
    ListNode *p;
    p = new ListNode(newItem, topNode);
    topNode = p;
    stackSize++;
}

bool MyStack::empty() {
    return (stackSize == 0);
}

int MyStack::top() {
    return topNode->getData();
}

int MyStack::size() {
    return stackSize;
}

#endif