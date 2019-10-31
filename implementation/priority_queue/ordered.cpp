#include "PQNode.cpp"
#include "ordered.h"
#include <cstddef>

int PriorityQueue::top() {
    return front->data;
}

int PriorityQueue::size() {
    return queueSize;
}

bool PriorityQueue::empty() {
    return (queueSize == 0);
}

void PriorityQueue::pop() {
    front = front->next;
    queueSize--;
}

void PriorityQueue::push(int d, int pr) {
    PQNode *p = front;
    PQNode *tmp = new PQNode(d, pr);
    if (front == NULL) {
        front = tmp;
    } else {
        while (p->priority < pr) {
            p = p->next;
        }
        tmp->next = p->next;
        p->next = tmp;
    }
    queueSize++;
}
