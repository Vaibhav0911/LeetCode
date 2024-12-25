class Solution {
public:
    vector<int> countBits(int n) {
        
        int p1=0, p2=1;
        vector<int> ans;
        ans.push_back(0);
        
        if(n==0)    return ans;
        
        while(true){
            ans.push_back(ans[p1++]+1);
            if(p1 == p2){
                p1=0;
                p2=ans.size();
            }
            if(ans.size() == n+1)   break;
        }
        return ans;
        
    }
};