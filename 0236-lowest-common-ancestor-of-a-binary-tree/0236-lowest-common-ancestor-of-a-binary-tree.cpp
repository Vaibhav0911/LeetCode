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
    
    TreeNode* ans=NULL;
    
    bool lca(TreeNode* root, TreeNode* p, TreeNode* q){
        
        if(ans != NULL)     return true;
        if(root == NULL)    return false;
        
        bool left = lca(root->left, p, q);
        bool right = lca(root->right, p, q);
        bool center = (root->val==p->val || root->val==q->val) ? true : false;
        
        if(ans==NULL && ((left && right) || (center && right) || (center && left)))                        ans = root;
        
        return (left || right || center);
        
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        lca(root, p, q);        
        return ans;
    }
};