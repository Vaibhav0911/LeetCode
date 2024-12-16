/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    
    TreeNode* ans;
    void bbst(vector<int> nums, int l, int h, TreeNode* root){
        
        if(l>h)     return;
        
        int mid = (l+h)/2;
        TreeNode* node = new TreeNode(nums[mid]);
       
        if(root == NULL)                     root=node;
        else if(root->val > node->val)       root->left=node;
        else if(root->val < node->val)       root->right=node;
        
        bbst(nums, l, mid-1, node);
        bbst(nums, mid+1, h, node);
        
        if(l == 0 && h == nums.size()-1)       ans = root;      
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        
        vector<int> nums;
        while(head != NULL){
            nums.push_back(head->val);
            head = head->next;
        }
        bbst(nums, 0, nums.size()-1, NULL);    
        return ans;
    
    }
};