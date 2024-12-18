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
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int>  ans;
        if(root == NULL)       return ans;

        stack<TreeNode *> s1, s2;
        s1.push(root);
        
        while(!s1.empty()){
            TreeNode *node = s1.top();
            ans.push_back(node->val);
            while(!s1.empty()){
                TreeNode *node2 = s1.top();
                if(node2->right != NULL)     s2.push(node2->right);
                if(node2->left != NULL)      s2.push(node2->left);
                s1.pop();
            }
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
        return ans;
    }
};