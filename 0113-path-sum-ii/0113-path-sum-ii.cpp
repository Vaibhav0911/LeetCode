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
    void check(TreeNode* root, int targetSum, int sum, vector<int> arr){
        
        if(root == NULL)         return;
        
        if(root->left == NULL && root->right == NULL){
            sum += root->val;
            arr.push_back(root->val);
            if(targetSum == sum)       ans.push_back(arr);
            return;
        }
        
        arr.push_back(root->val);
        check(root->left, targetSum, sum+root->val, arr);
        check(root->right, targetSum, sum+root->val, arr);
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        if(root == NULL)     return ans;
        
        vector<int> arr;
        check(root, targetSum, 0, arr);
        return ans;
        
    }
};