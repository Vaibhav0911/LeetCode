class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        set<vector<int>> s;
        for(int i=0 ; i<n-2 ; i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k] == 0){
                    vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(nums[k]);
                    s.insert(v);
                    j++;
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k] < 0)     j++;
                else                                     k--;
            }
        }
        
        
       for (auto i : s) {
         ans.push_back(i);
       }
        
        return ans;
    }
};