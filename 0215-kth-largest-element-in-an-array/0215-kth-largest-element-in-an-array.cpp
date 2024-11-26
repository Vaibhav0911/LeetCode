class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       
        multiset<int> arr;
        int n=nums.size();
        for(int i=0 ; i<n ; i++)       arr.insert(nums[i]);
        
        int i=0;
        for(auto itr: arr){
            if(i == n-k)     return itr;
            i++;
        }
        
        return 0;
            
    }
};