class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int n=nums.size();
        long long num=0;
        
        for(int i=0 ; i<n ; i++)       num = num ^ nums[i];
        
        num = (num & (num-1)) ^ num;
        long long b1=0,b2=0;
        
        for(int i=0 ; i<n ; i++){
            if((nums[i] & num) == 0)                        b1 = b1^nums[i];
            else                                            b2 = b2^nums[i]; 
        }
        
        vector<int> ans;
        ans.push_back(b1);
        ans.push_back(b2);
        return ans;
        
    }
};