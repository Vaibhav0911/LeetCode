/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        TreeNode *n = root;
        while(true){
            if(n->val == p->val || n->val == q->val)        return n;
            else if(n->val < p->val && n->val < q->val)     n = n->right;
            else if(n->val > p->val && n->val > q->val)     n = n->left;
            else                                            return n; 
        }
        return n;
    }
};