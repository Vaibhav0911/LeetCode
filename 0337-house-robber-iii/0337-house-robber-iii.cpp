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
    
    vector<int> dp(TreeNode* root){
        
        if(root == NULL){
            vector<int> v(2,0);
            return v;
        }
        
        vector<int> l(2,0), r(2,0);
        
        l = dp(root->left);
        r = dp(root->right);
        
        vector<int> ans(2,0);
        
        ans[0] = root->val + l[1] + r[1];
        ans[1] = max(l[0], l[1]) + max(r[0], r[1]);
        
        return ans;
        
    }
    
    int rob(TreeNode* root) {
        
        vector<int> ans = dp(root);
        return max(ans[0], ans[1]);
        
    }
};