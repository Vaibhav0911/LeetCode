class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int mxsum=0, sum=0, neg=0, mnneg=nums[0];
        for(int i=0 ; i<nums.size() ; i++){
            sum += nums[i];
            if(sum < 0)           sum=0;
            else if(sum > mxsum)  mxsum=sum;
            
            if(nums[i] < 0){
                neg++;
                if(nums[i] > mnneg)    mnneg = nums[i];
            }
        }
        
        if(neg == nums.size())    return mnneg;
        return mxsum;
    }
};