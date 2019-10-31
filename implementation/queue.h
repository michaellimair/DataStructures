#include "ListNode.h"

class Queue {
    public:
        Queue();
        bool empty();
        int size();
        void push_back(int);
        int top();
        void pop();
    private:
        ListNode *front;
        ListNode *rear;
        int queueSize;
};
