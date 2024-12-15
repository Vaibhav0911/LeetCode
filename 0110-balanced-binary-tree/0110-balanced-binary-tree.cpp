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
    
    bool flag=true;
    
    int bal(TreeNode* root){
        
        if(root == NULL || flag == false)     return 0;
        
        int leftheight =  bal(root->left);
        int rightheight = bal(root->right);
        
        if(abs(leftheight-rightheight) > 1)    flag=false;
        
        return max(leftheight,rightheight) + 1;
        
    }
    
    bool isBalanced(TreeNode* root) {
        
        int ch=bal(root);
        if(flag)       return true;
        else           return false;
    }
};