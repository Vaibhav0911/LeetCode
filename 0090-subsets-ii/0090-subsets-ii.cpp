class Solution {
public:
    
    vector<vector<int>> ans;
    
    void check(vector<int> nums, vector<int> arr, int i){
        
        if(i == nums.size()){
            cout<<"h"<<endl;
            ans.push_back(arr);
            return;
        }
        
        for(int j=i ; j<nums.size() ; j++){
            if(j == nums.size()-1)       check(nums, arr, j+1);
            if(j>i && (nums[j] == nums[j-1]))        continue;
            arr.push_back(nums[j]);
            check(nums, arr, j+1);
            arr.pop_back();
        }
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        vector<int> arr;
        check(nums, arr, 0);
        return ans;
        
    }
};