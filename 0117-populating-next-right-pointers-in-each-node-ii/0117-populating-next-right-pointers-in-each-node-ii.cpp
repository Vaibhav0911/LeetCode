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
    Node* connect(Node* root) {
        
        if(root == NULL)     return root;
        
        stack<Node*> s;
        s.push(root);
        
        while(!s.empty()){
            
            Node* ptr = NULL;
            while(!s.empty()){
                Node* ptr1 = s.top();
                s.pop();
                ptr1->next = ptr;
                ptr = ptr1;
            }
            
            while(ptr != NULL){
                if(ptr->left != NULL)    s.push(ptr->left);
                if(ptr->right != NULL)   s.push(ptr->right);
                ptr = ptr->next;
            }
            
        }
        
        return root;
        
    }
};