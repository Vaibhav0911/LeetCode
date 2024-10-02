class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size(),ans=0;
        for(int i=0 ; i<n ; i++){
            if(i == n-1)              return ans;
            else if(nums[i] >= n-1)   return ++ans;
            int mx=0,val=nums[i],l=i+1;
            for(int j=l ; j<l+val ; j++){
                if(j == n-1){
                    ans++;
                    return ans;
                }  
                if(j+nums[j] >= n-1){
                    ans += 2;
                    return ans;
                }
                if(nums[j]+j > mx && nums[j] != 0){
                    mx = nums[j]+j;
                    i=j-1;
                }
            }
            ans++;
        }
        return ans;
    }
};