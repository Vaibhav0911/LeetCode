class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        vector<vector<int> > ans(3, vector<int>(3,0));
        for(int i=prices.size()-1 ; i>=0 ; i--){
            ans[0][0] = max(prices[i]+ans[1][2], ans[0][1]);
            ans[1][0] = max(-prices[i]+ans[0][1], ans[1][1]);
            ans[0][2] = ans[0][1];
            ans[1][2] = ans[1][1];
            ans[0][1] = ans[0][0];
            ans[1][1] = ans[1][0];
        }
        return ans[1][0];
        
    }
};