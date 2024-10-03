class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n=nums.size(),ans=1,z=0;
        for(int i=0 ; i<n ; i++){
            if(nums[i] != 0)      ans *= nums[i];
            else                  z++;
        }
        
        if(z == 0){
            for(int i=0 ; i<n ; i++)      nums[i] = ans/nums[i];
        }
        else if(z == 1){
            for(int i=0 ; i<n ; i++){
                if(nums[i] == 0)          nums[i] = ans;
                else                      nums[i] = 0;
            }
        }
        else{
            for(int i=0 ; i<n ; i++)      nums[i] = 0;
        }
        
        return nums;
        
    }
};