class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int elm, c=0;
        for(int i=0 ; i<nums.size() ; i++){
            if(c == 0){
                elm=nums[i];
                c++;
            }
            else if(elm == nums[i])       c++;
            else                          c--;
        }
        return elm;

    }
};