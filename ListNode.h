#include <string>

using std::string;

class ListNode {
    public: 
        ListNode(int, ListNode*);
        ListNode *get_Next();
        int getData();

        void set(int);
        void set_Next(ListNode*);
    private:
        int data;
        ListNode *next;
};
