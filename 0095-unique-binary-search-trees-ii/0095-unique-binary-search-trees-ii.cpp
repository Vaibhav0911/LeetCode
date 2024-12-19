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
    
    vector<TreeNode*> create(int l, int h){
        
        vector<TreeNode*> ltree, rtree, ans;
        for(int i=l ; i<=h ; i++){
            ltree = create(l, i-1);
            rtree = create(i+1, h);
            for(int j=0 ; j<ltree.size() ; j++){
                for(int k=0 ; k<rtree.size() ; k++){
                    TreeNode *root = new TreeNode(i);
                    root->left = ltree[j];
                    root->right = rtree[k];
                    ans.push_back(root);
                }
            }
        }
        if(ans.empty())     ans.push_back(NULL);
        return ans;
        
    }
    
    vector<TreeNode*> generateTrees(int n) {
       
        return create(1, n);
        
    }
};