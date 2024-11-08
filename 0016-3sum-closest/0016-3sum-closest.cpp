class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int sum=0, mn=100000, ans=0 , n=nums.size();
        for(int i=0 ; i<n-2 ; i++){
            sum += nums[i];
            for(int j=i+1 ; j<n-1 ; j++){
                sum += nums[j];
                for(int k=j+1 ; k<n ; k++){
                    sum += nums[k];
                    if(mn > abs(target-sum)){
                        mn = abs(target-sum);
                        ans = sum;
                    }
                    sum -= nums[k];
                }
                sum -= nums[j];
            }
            sum -= nums[i];
        }
        return ans;
    }
};