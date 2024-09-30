class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),ans=0,ch=1,i;
        for(i=0 ; i<n-1-ans ; i++){
            if(nums[i] == nums[i+1]){
                ch++;
                // if(ch>2)  ans++;
            }
            else{
                if(ch>2){
                    ch -= 2;
                    for(int j=i+1 ; j<n ; j++)   nums[j-ch] = nums[j];
                    i = i-ch;
                    ans += ch;
                }
                ch=1;
            }
        }
        
        if(ch>2){
            ch -= 2;
            for(int j=i+1 ; j<n ; j++)   nums[j-ch] = nums[j];
            i = i-ch;
            ans += ch;
        }
        
        return n-ans;
        
    }
};