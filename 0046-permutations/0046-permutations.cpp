class Solution {
public:
    vector<vector<int>> ans;
    
    void per(vector<int> nums, int i){
        
        if(i+1 == nums.size()){   
            ans.push_back(nums);
            return;
        }
        
        per(nums, i+1);
        
        for(int j=i+1 ; j<nums.size() ; j++){
            swap(nums[i], nums[j]);
            per(nums, i+1);
        }

    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        per(nums, 0);
        return ans;
        
    }
};