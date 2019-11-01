template <class T>
class TreeNode {
    private:
        T info;
        TreeNode *left;
        TreeNode *right;
    public:
        TreeNode(); // create a new left child of a given node
        void setLeft(T const &);
        void setRight(T const &);
        TreeNode *getLeft();
        TreeNode *getRight();
        void insert(T const &);
        T getData();
        bool equal(TreeNode*);
};
