class NumArray {
public:
    
    vector<int> prefixarr;
    NumArray(vector<int>& nums) {
        int sum=0;
        for(int i=0 ; i<nums.size() ; i++){
            sum += nums[i];
            prefixarr.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        
        if(left == 0)       return prefixarr[right];
        return prefixarr[right] - prefixarr[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */