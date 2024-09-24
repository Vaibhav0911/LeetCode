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

    int n=0;
    void trav(TreeNode* root, set<int> &arr){

        if(root == NULL)      return;
        
        n++;
        arr.insert(root->val);
        trav(root->left, arr);
        trav(root->right, arr);
        return;

    }

    int getMinimumDifference(TreeNode* root) {
        
       set<int> arr;
       trav(root,arr);

       if(arr.size() == n){
         int min=100000;
         int j=-100005;
         for(auto i: arr){
            if(i-j < min)  min=i-j;
            j=i;
         }
         
         return min; 
       }
       
       return 0;

    }
};