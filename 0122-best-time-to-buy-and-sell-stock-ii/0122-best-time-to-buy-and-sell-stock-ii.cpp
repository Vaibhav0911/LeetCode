class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int p=prices[0],profit=0;
        for(int i=1 ; i<prices.size() ; i++){
            if(p<prices[i])    profit += prices[i]-p;
            p = prices[i];
        }
        
        return profit;
        
    }
};