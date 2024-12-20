class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int c1=0,c2=0,el1,el2, n=nums.size();
        for(int i=0 ; i<n ; i++){
            if(c1 == 0 && nums[i] != el2){
                el1 = nums[i];
                c1++;
            }
            else if(c2 == 0 && nums[i] != el1){
                el2 = nums[i];
                c2++;
            }
            else if(el1 == nums[i])      c1++;
            else if(el2 == nums[i])      c2++;
            else{
                c1--;
                c2--;
            }
        }
        
        c1=0; c2=0;
        for(int i=0 ; i<n ; i++){
            if(el1 == nums[i])         c1++;
            else if(el2 == nums[i])    c2++;
        }
        
        vector<int> ans;
        if(c1 > n/3)       ans.push_back(el1);
        if(c2 > n/3)       ans.push_back(el2);
        
        return ans;
        
    }
};