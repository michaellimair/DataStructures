#include "TreeNode.cpp"

template <class T>
class BTree {
    private:
        TreeNode<T>* root;
    public:
        BTree();
        int height(TreeNode<T>*);
        bool compare(BTree);
        int count_leaf(TreeNode<T>*);
        void InsertNode(T const &);
        void InsertNode(T const &, TreeNode<T>*);
        void PreorderTraversal();
        void PreorderHelper(TreeNode<T>*);
        void InorderTraversal();
        void InorderHelper(TreeNode<T>*);
        void PostorderTraversal();
        void PostorderHelper(TreeNode<T>*);
        bool equal(BTree*);
        TreeNode<T> *getRoot();
};
