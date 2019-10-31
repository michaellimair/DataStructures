#include <string>
#include "ListNode.cpp"

using std::string;

class List {
    public:
        List(string);
        void insert(ListNode*);
        int count();
        void print();
        ListNode *search(int);
        void pop(ListNode*);
    private:
        ListNode *first;
        string name;
};
