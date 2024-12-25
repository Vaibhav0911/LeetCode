class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n=nums.size(), zeros=0;
        for(int i=0 ; i<n ; i++){
            if(nums[i] == 0)    zeros++;
            else                nums[i-zeros]=nums[i];
        }
        
        for(int i=n-zeros ; i<n ; i++)      nums[i]=0;
        
    }
};