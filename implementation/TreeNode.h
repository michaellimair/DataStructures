class TreeNode {
    private:
        char info;
        TreeNode *left;
        TreeNode *right;
    public:
        TreeNode(); // create a new left child of a given node
        void setLeft(char);
        void setRight(char);
        TreeNode *getLeft();
        TreeNode *getRight();
        void insert(char);
        char getData();
        bool equal(TreeNode*);
};
