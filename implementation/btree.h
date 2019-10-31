#include "TreeNode.cpp"

class BTree {
    private:
        TreeNode* root;
    public:
        BTree();
        int height(TreeNode*);
        bool compare(BTree);
        int count_leaf(TreeNode*);
        void InsertNode(char);
        void InsertNode(char, TreeNode*);
        void PreorderTraversal();
        void PreorderHelper(TreeNode*);
        void InorderTraversal();
        void InorderHelper(TreeNode*);
        void PostorderTraversal();
        void PostorderHelper(TreeNode*);
        bool equal(BTree*);
        TreeNode *getRoot();
};
