class Solution {
public:
    
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        
        if(n==1)          return nums[0];
        else if(n==2)     return max(nums[0], nums[1]);
        else{
            
            vector<int> v(3,0);
            v[0]=nums[0];
            v[1]=max(nums[0], nums[1]);
            v[2]=v[1];
            for(int i=2 ; i<n-1 ; i++){
                v[2] = max(nums[i]+v[0], v[1]);
                v[0] = v[1];
                v[1] = v[2];
            }
            int m1=v[2];
            
            v[0]=nums[1];
            v[1]=max(nums[1], nums[2]);
            v[2]=v[1];
            for(int i=3 ; i<n ; i++){
                v[2] = max(nums[i]+v[0], v[1]);
                v[0] = v[1];
                v[1] = v[2];
            }
            int m2=v[2];
            
            return max(m1, m2);
        }             
        
    }
};