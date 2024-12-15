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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
      
        map<int, int> mp;
        int n=postorder.size();
        
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                if(inorder[j] == postorder[i]){
                    mp[postorder[i]] = j;
                    break;
                }
            }
        }
        
        TreeNode *root = NULL;
        for(int i=n-1 ; i>=0 ; i--){
            
            TreeNode* node = new TreeNode(postorder[i], NULL, NULL);
            if(root == NULL){
                root = node;
                continue;
            }
            
            TreeNode* temp = root;
            while(true){
                if(mp[temp->val] < mp[node->val]){
                    if(temp->right != NULL)     temp=temp->right;
                    else{
                        temp->right = node;
                        break;
                    }
                }
                else{
                    if(temp->left != NULL)      temp=temp->left;
                    else{
                        temp->left=node;
                        break;
                    }
                }
            }
        }
        return root;
        
    }
};