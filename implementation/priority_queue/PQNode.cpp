class PQNode {
    public: 
        int data;
        int priority;
        PQNode *next;
        PQNode(int d, int p) {
            data = d;
            priority = p;
            next = NULL;
        }
}