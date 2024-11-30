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
    
    vector<vector<int>> ans;
    void check(TreeNode* root, int i){
        
        if(root == NULL)       return;
        
        if(i >= ans.size()){
            vector<int> v;
            v.push_back(root->val);
            ans.push_back(v);
        }
        else      ans[i].push_back(root->val);
        
        check(root->left, i+1);
        check(root->right, i+1);
        
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        check(root, 0);
        return ans;
        
    }
};