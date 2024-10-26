class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int i=0,n=nums.size();
        while(i<n){
            if(!(nums[i]>=1 && nums[i]<=n) || i == nums[i]-1 || nums[i] == nums[nums[i]-1])                                      i++;
            else                   swap(nums[i], nums[nums[i]-1]);
        }
        
        for(int i=1 ; i<=n ; i++){
            if(nums[i-1] != i)    return i;
        }
        
        return n+1;
        
    }
};