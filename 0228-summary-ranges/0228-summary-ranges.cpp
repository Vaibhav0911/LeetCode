class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
       int n=nums.size();
       vector<string> ans;
       int count=0;
       string s="";

       if(n == 0)      return ans;

       for(int i=0 ; i<n-1 ; i++){
          if(nums[i+1]-1 == nums[i]){
            if(count == 0){   
               s += to_string((long)nums[i]);
            }
            count++;
          }
          else{
            if(count > 0)      s += "->";
            count=0;
            s += to_string((long)nums[i]);
            ans.push_back(s);
            s="";
          }
       }

       if(count)            s += "->";
       s += to_string((long)nums[n-1]); 
       ans.push_back(s);

       return ans;

    }
};