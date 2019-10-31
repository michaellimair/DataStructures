#include "PQNode.cpp"

class PriorityQueue {
    public:
        int top();
        int size();
        bool empty();
        void pop();
        void push(int, int);
    private:
        PQNode *front;
        int queueSize;
};