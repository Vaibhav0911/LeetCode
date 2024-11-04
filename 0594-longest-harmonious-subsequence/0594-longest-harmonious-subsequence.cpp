class Solution {
public:
    int findLHS(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int count=0, num1=1, num2=0;
        
        for(int i=0 ; i<nums.size()-1 ; i++){
            if(nums[i+1]-nums[i] == 1){
              if(num2 == 0)   num2++;  
              else{
                  if(num1+num2 > count)    count = num1+num2;
                  num1 = num2;
                  num2 = 1;
              }  
            }
            else if(nums[i+1]-nums[i] > 1){
                if(num2 != 0 && num1+num2 > count)    count = num1+num2;
                num1 = 1;
                num2 = 0;
            }
            else{
                if(num2 == 0)    num1++;
                else             num2++;
            }
        }
        
        if(num2 != 0 && num1+num2 > count)    count = num1+num2;
        return count;
        
    }
};