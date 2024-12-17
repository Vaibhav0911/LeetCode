class Solution {
public:
    
    int mn=5001;
    void mbs(vector<int> nums, int l, int h){
        
        if(l>h)        return;
        
        int m=(l+h)/2;
        
        if(nums[m] <= nums[h]){
            if(mn > nums[m])     mn = nums[m];
            return mbs(nums, l, m-1);
        }
        else{
            if(mn > nums[l])     mn = nums[l];
            return mbs(nums, m+1, h);
        }
        
    }
    
    int findMin(vector<int>& nums) {
        
        mbs(nums, 0, nums.size()-1);
        return mn;
        
    }
};