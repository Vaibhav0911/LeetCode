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

    int mx;
    
    void ch(TreeNode* head, int n){
      
      if(head == NULL)    return;
      if(n>mx)       mx=n;
      ch(head->left,n+1);
      ch(head->right,n+1);

    }

    int maxDepth(TreeNode* root) {

        ch(root,1);  
        return mx; 
    }
};