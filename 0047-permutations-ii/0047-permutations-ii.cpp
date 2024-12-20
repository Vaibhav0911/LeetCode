class Solution {
public:
    
    vector<vector<int>> ans;
    
    void check(vector<int> nums, int i){
        
        if(i == nums.size()){
            ans.push_back(nums);
            return;
        }   
        
        for(int j=i ; j<nums.size() ; j++){
            
            if(j!=i && nums[i] == nums[j])      continue;
            
            swap(nums[i], nums[j]);
            check(nums, i+1);
            
        }
        
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        check(nums, 0);
        return ans;
        
    }
};