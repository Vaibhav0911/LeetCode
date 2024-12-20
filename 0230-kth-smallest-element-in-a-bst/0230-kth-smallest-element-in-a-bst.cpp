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
    
    int ind=0, ans;
    
    void check(TreeNode* root, int k){
        
        if(ind >= k)       return;
         
        if(root == NULL)   return;
        
        check(root->left, k);
        
        if(++ind == k)     ans = root->val;
        
        check(root->right, k);
        
    }
    
    int kthSmallest(TreeNode* root, int k) {
        
        check(root, k);
        return ans;
        
    }
};