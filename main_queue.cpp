#include "implementation/queue.cpp"
#include <iostream>

using std::endl;
using std::cout;

int main() {
    Queue *q = new Queue();

    q->push_back(1);
    q->push_back(2);
    q->push_back(3);

    for (int i = 0; i < 3; i++) {
        cout << q->top() << endl;
        q->pop();
    }

    return 0;
}