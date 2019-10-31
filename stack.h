#include "ListNode.h"

class MyStack {
    public:
        MyStack();
        void pop();
        bool empty();
        void push(int);
        int top();
        int size();
    private:
        ListNode *topNode;
        int stackSize;
};
