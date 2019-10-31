#include <iostream>
#include "implementation/stack.cpp"

using std::endl;
using std::cout;

int main() { 
    MyStack *s = new MyStack();

    s->push(1);
    s->push(2);
    s->push(3);

    for (int i = 1; i <= 3; i++) {
        cout << s->top() << endl;
        s->pop();
    }

    return 0;
}