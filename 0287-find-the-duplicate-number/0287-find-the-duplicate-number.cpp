class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int s=0,f=0;
        while(true){
            s=nums[s];
            f=nums[f];
            f=nums[f];
            if(f==s)   break;
        }
        s=0;
        while(true){
            if(f==s)   break;
            s=nums[s];
            f=nums[f];
        }
        
        return f;
        
    }
};