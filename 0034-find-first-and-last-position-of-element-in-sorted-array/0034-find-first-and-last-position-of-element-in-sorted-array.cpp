class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n=nums.size();
        int l=0,h=n-1;
        vector<int> ans;
        
        while(l<=h){
            int mid = (l+h)/2;
            if((mid == 0 && nums[mid] == target) || (mid != 0 && nums[mid] == target &&                     nums[mid-1] != target)){
                ans.push_back(mid);
                break;
            }
            else if(nums[mid] >= target)       h = mid-1;
            else                               l = mid+1; 
        }
        
        l=0; h=n-1;
        while(l<=h){
            int mid = (l+h)/2;
            if((mid == n-1 && nums[mid] == target) || (mid != n-1 && nums[mid] == target &&                     nums[mid+1] != target)){
                ans.push_back(mid);
                break;
            }
            else if(nums[mid] <= target)       l = mid+1;
            else                               h = mid-1; 
        }
        
        if(ans.size() != 2){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        
        return ans;
        
    }
};