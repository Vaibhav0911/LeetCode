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
    void check(TreeNode* root, int level){
        
        if(root == NULL)      return;
        
        if(ans.size() == level){
            vector<int> temp;
            temp.push_back(root->val);
            ans.push_back(temp);
        }
        else{
            if(level%2 != 0)    ans[level].insert(ans[level].begin(), root->val);
            else                ans[level].push_back(root->val);
        }
        
        check(root->left, level+1);
        check(root->right, level+1);
        
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        check(root, 0);
        return ans;
        
    }
};