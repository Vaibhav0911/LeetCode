class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int, int> mp;
        int ans=0,n=nums.size();

        for(auto i: nums){
            mp[i]++;
            if(mp[i] >= (n+1)/2){
                ans=i;
                break;
            }
        }

        return ans;

    }
};