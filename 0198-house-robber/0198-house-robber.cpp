class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        if(n == 1)          return nums[0];
        else if(n == 2)     return max(nums[0],nums[1]);
        else{
            
            vector<int> nums1(n,0);
            nums1[n-1] = nums[n-1];
            nums1[n-2] = nums[n-2];
            
            for(int i=n-1 ; i>= 3 ; i--){
                if(nums1[i]+nums[i-2] > nums1[i-2])     nums1[i-2] = nums1[i]+nums[i-2];
                if(nums1[i]+nums[i-3] > nums1[i-3])     nums1[i-3] = nums1[i]+nums[i-3];
            }
            
            if(nums[0]+nums1[2] > nums1[0])      nums1[0] = nums[0]+nums1[2];
            
            return max(nums1[0],nums1[1]);
            
        }
        
    }
};