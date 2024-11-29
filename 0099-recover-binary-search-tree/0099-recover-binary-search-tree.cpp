/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int ch;
    TreeNode* ptr1;
    TreeNode* ptr2;
    TreeNode* ptr3;
    TreeNode* ptr4;
    
    void check(TreeNode* root){
        
        if(root == NULL)     return;
        
        check(root->left);
        if(ch == 1){
            ptr2 = ptr1;
            ptr1 = root;
            if(ptr2 != NULL && ptr2->val >= ptr1->val){
                ch++;
                ptr3=ptr1;
            }
        }
        else if(ch == 2){
            ptr4 = ptr3;
            ptr3 = root;
            if(ptr4->val >= ptr3->val)    ch++;
        }
        else    return;
        check(root->right);
    }
    
    void recoverTree(TreeNode* root) {
        ch=1;
        ptr1=NULL;
        ptr2=NULL;
        ptr3=NULL;
        ptr4=NULL;
        check(root);
        
        if(ch == 3)        swap(ptr3->val, ptr2->val);
        else               swap(ptr2->val, ptr1->val);
    }
};