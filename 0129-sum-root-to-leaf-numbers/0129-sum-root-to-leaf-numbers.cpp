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
    
    int ans=0;
    void sum(TreeNode* root){
         
        if(root->left == NULL && root->right == NULL){
            ans += root->val;
            return;
        }     
        if(root->left != NULL){
            root->left->val += (root->val*10);
            sum(root->left);
        }
        if(root->right != NULL){
            root->right->val += (root->val*10);
            sum(root->right);
        }
         
    }
    
    int sumNumbers(TreeNode* root) {
        
        sum(root);
        return ans;
        
    }
};