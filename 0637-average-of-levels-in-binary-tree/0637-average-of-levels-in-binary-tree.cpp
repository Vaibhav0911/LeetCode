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
     


    void trav(TreeNode* root, int lev, vector<double> &freq, vector<double> &sum){

      if(root == NULL)      return;
      
      freq[lev]++;
      sum[lev] += root->val;

      trav(root->left, lev+1, freq, sum);
      trav(root->right, lev+1, freq, sum);
      return;

    } 

    vector<double> averageOfLevels(TreeNode* root) {
      vector<double> freq(10001,0);
      vector<double> sum(10001,0);  

      trav(root,1,freq,sum);
      vector<double> avg;

      int i=1;
      while(freq[i]){
        double a = sum[i]/freq[i];
        avg.push_back(a);
        i++;
      }

      return avg;

    }

};