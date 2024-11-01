class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n=nums.size();
        int l=0,h=n-1;
        
        while(l<h){
            int mid = (l+h)/2;
            if(nums[mid] > nums[h])   l = mid+1;
            else                      h = mid;
        }
        
        int rot = l;
        l=0; h=n-1;
        
        while(l<=h){
            int mid = (l+h)/2;
            int rmid = (mid+rot)%n;
            if(nums[rmid] == target)      return rmid;
            else if(nums[rmid] < target)  l = mid+1;
            else                          h = mid-1; 
        }
        
        return -1;
    }
};