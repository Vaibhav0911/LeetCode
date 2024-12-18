/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    
    void check(Node* root){
        
        if(root->left == NULL && root->right == NULL)    return;
        
        root->left->next = root->right;
        if(root->next == NULL)    root->right->next = NULL;
        else                      root->right->next = root->next->left;
        
        check(root->left);
        check(root->right);
        
    }
    
    Node* connect(Node* root) {
        
        if(root == NULL)   return root;
        check(root);
        return root;
        
    }
};