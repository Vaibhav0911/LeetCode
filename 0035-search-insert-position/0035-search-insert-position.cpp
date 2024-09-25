class Solution {
public:

    int check(vector<int> nums, int target, int l, int r){
        
        int m = (l+r)/2;
        if(l == r){       
            if(nums[m] > target)                     return m;
            else if(nums[m] < target)                return m+1;
        }
         
        if(nums[m] > target)           return check(nums, target, l, m);

        else if(nums[m] < target)      return check(nums, target, m+1, r);

        else    return m;

    }

    int searchInsert(vector<int>& nums, int target) {

        return check(nums, target, 0, nums.size()-1);
        
    }
};