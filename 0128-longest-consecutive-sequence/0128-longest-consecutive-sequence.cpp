class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0)   return 0;
        set<int> nums1;
        for(auto i: nums)   nums1.insert(i);
        
        int ans=1,s=1;

        for (auto itr = nums1.begin(); itr != nums1.end(); ) {
            if(*itr - *(++itr) == -1){
                if(itr == nums1.end())   break;
                s++;
            }
            else{
                if(ans < s)   ans = s;
                s=1;
            }
        }
        if(ans < s)   ans = s;
        return ans;
    }
};