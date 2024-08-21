class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
       int j=0,h=0;
       for(int i=0 ; i<prices.size() ; i++){
        if(prices[j] > prices[i]){
            j=i;
        }
        else{
            if(prices[i]-prices[j] > h)     h = prices[i]-prices[j];
        }
       }

       return h;

    }
};