class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        
        int c1=prices[0],c2=prices[1];
        for(int i=2 ; i<prices.size() ; i++){
            if(prices[i] < c1){
                c2 = min(c1,c2);
                c1 = prices[i];
            }
            else if(prices[i] < c2)    c2=prices[i];
        }
        
        if(c1+c2 <= money)      return money-(c1+c2);
        return money;
    }
};