class Solution {
public:
    
    void rev(vector<int>& nums, int l, int h){
        while(l<h){
            int temp = nums[l];
            nums[l] = nums[h];
            nums[h] = temp;
            l++;
            h--;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        k = k%n;
        
        rev(nums, 0, n-k-1);
        rev(nums, n-k, n-1);
        rev(nums, 0, n-1);
        
    }
};