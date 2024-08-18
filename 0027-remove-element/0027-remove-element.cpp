class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int j=nums.size()-1,i=0;

        while(i<=j){

           if(nums[j] == val){
            j--;
            continue;
           }

           if(nums[i] == val){
            swap(nums[i],nums[j]);
            j--;
           }
           
           i++;
        }
        return j+1;

    }
};