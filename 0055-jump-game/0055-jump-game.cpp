class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int mxind=0;
        for(int i=0 ; i<=mxind ; i++){
            if(i+nums[i] > mxind)           mxind=i+nums[i];
            if(mxind >= nums.size()-1)      return true;
        }
        
        return false;
    }
};