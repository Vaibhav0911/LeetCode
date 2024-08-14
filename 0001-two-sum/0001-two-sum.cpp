class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        multimap<int,int> mm;
        for(int i=0 ; i<nums.size() ; i++){
            int key=nums[i];
            int value=i;
            mm.insert({key,value});
        }

        auto low=mm.begin(),high=mm.end();
        high--;

        while(low != high){

           if((*low).first + (*high).first < target)                         low++;
           else if((*low).first + (*high).first > target)                    high--;
           else                                                        break;

        }

        vector<int> ans;
        ans.push_back((*low).second);
        ans.push_back((*high).second);

        return ans;
        
    }
};