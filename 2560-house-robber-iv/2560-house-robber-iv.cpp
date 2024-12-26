class Solution {
public:
    
    bool ch(vector<int> nums, int m, int k){
        int total=0;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i] <= m){
                total++;
                i++;
            }
        }
        return (total >= k);
    }
    
    int minCapability(vector<int>& nums, int k) {
        
        int l=1, h=1000000000, ans;
        while(l<=h){
            int m = (l+h)/2;
            if(ch(nums, m, k)){
                ans = m;
                h = m-1;
            }
            else    l = m+1;
        }
        
        return ans;
        
    }
};