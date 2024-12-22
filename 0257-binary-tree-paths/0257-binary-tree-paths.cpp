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
    
    string conv_str(int n){
        
        string ans="";
        int m;
        if(n<0)           m=n*(-1);
        else if(n>0)      m=n;
        else              return "0";
        
        while(m > 0){
            ans = (char)((m%10)+'0') + ans;
            m = m/10;
        }
        
        if(n<0)      return "-"+ans;
        
        return ans;
        
    }
    
    vector<string> ans;
    
    void btp(TreeNode* root, string s){
        
        if(root == NULL)   return;
        
        if(root->left == NULL && root->right == NULL){
            s += conv_str(root->val);
            ans.push_back(s);
            return;
        }
        
        s += conv_str(root->val) + "->";
        btp(root->left, s);
        btp(root->right, s);
        
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
       
        btp(root, "");
        return ans;
        
    }
};