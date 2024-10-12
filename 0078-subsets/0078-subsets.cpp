class Solution {
public:
    
    vector<vector<int>> v;
    
    void sub(vector<int>& nums, int i, vector<int> ans){
        
        if(nums.size() == i){
            v.push_back(ans);
            return;
        }
        
        sub(nums, i+1, ans);        
        ans.push_back(nums[i]);
        sub(nums, i+1, ans);
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> ans;
        sub(nums, 0, ans);
        return v;
        
    }
};