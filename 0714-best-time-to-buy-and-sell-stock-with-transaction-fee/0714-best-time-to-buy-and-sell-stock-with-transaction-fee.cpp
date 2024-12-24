class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        
        vector<vector<int> > ans(2, vector<int>(2,0));
        for(int i=prices.size()-1 ; i>=0 ; i--){
            ans[0][0] = max(prices[i]+ans[1][1], ans[0][1]);
            ans[1][0] = max(-prices[i]-fee+ans[0][1], ans[1][1]);
            ans[0][1] = ans[0][0];
            ans[1][1] = ans[1][0];
        }
        return ans[1][0];
        
    }
};