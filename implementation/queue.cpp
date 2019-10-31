#pragma once
#include "ListNode.cpp"
#include "queue.h"

Queue::Queue() {
    queueSize = 0;
    front = NULL;
    rear = NULL;
}

bool Queue::empty() {
    return (queueSize == 0);
}

int Queue::size() {
    return queueSize;
}

void Queue::push_back(int newData) {
    ListNode *p = new ListNode(newData);
    if (empty()) {
        front = p;
    } else {
        rear->set_Next(p);
    }
    rear = p;
    queueSize++;
}

int Queue::top() {return front->getData();}

void Queue::pop() {
    // pop the first element which arrives
    front = front->get_Next();
    if (front == NULL)
        rear = NULL;
    queueSize--;
}