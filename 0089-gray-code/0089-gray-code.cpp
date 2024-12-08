class Solution {
public:
    vector<int> grayCode(int n) {
        
        vector<int> ans;
        ans.push_back(0);
        
        for(int i=0 ; i<n ; i++){
            int val = pow(2, i);
            int m = ans.size();
            for(int j=m-1 ; j>=0 ; j--)    ans.push_back(ans[j]+val);
        }
        
        return ans;
        
    }
};