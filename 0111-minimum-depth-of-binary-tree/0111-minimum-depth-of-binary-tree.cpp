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
    
    int mn=100000;
    
    void check(TreeNode* root, int h){
        
        if(root == NULL)    return;
        
        else if(root->left == NULL && root->right == NULL){
            if(mn > h)     mn = h;
            return;
        }
        
        check(root->left, h+1);
        check(root->right, h+1);
        
    }
    
    int minDepth(TreeNode* root) {
        
        if(root == NULL)    return 0;
        
        check(root, 1);
        return mn;
        
    }
};