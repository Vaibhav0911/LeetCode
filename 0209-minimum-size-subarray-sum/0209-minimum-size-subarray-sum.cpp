class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int l=0,r=0,mn=100001,sum=0;
        while(r != nums.size()){
            if(sum >= target && r-l < mn)    mn = r-l;
            if(sum < target)    sum += nums[r++];
            else                sum -= nums[l++];
        }
        
        while(l<=r){
            if(sum >= target && r-l < mn)    mn = r-l;
            if(sum < target)    break;
            sum -= nums[l++];
        }
        
        if(mn != 100001)     return mn;
        
        return 0;
        
    }
};