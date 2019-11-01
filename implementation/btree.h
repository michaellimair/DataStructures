#include "TreeNode.cpp"

template <class T>
class BTree {
    private:
        TreeNode<T>* root;
        int numberOfNodes;
    public:
        BTree();
        int height(TreeNode<T>*);
        int count_leaf(TreeNode<T>*);
        int count_nodes();
        void Insert(T const &);
        void InsertNode(T const &, TreeNode<T>*);
        void PreorderTraversal();
        void PreorderHelper(TreeNode<T>*);
        void InorderTraversal();
        void InorderHelper(TreeNode<T>*);
        void PostorderTraversal();
        void PostorderHelper(TreeNode<T>*);
        bool equal(BTree<T>*);
        TreeNode<T> *getRoot();
};
