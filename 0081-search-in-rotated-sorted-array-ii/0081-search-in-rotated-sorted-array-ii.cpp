class Solution {
public:
    
    int rbs(vector<int> arr, int l, int h, int target){
        
        if(l>h)                  return -1;
        
        int m = (l+h)/2;
        
        if(arr[m] == target)     return m;
        
        while((arr[l] == arr[m]) && (arr[m] == arr[h])){
            l++; h--;
            if(l>=h)             return -1;
        }
        
        if(arr[m] <= arr[h]){
            if(target > arr[m] && target <= arr[h])      return rbs(arr, m+1, h, target);
            else                                         return rbs(arr, l, m-1, target);     
        }
        else{
            if(target >= arr[l] && target<arr[m])        return rbs(arr, l, m-1, target);
            else                                         return rbs(arr, m+1, h, target); 
        }
           
        
    }
    
    bool search(vector<int>& nums, int target) {
        
        int flag = rbs(nums, 0, nums.size()-1, target);
        
        if(flag == -1)    return false;
        
        return true;
    }
};