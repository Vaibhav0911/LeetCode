class Solution {
public:
    
    int dp[10001];
    
    int helper(int n){
        if(n == 0)         return 0;
        
        if(dp[n] != -1)    return dp[n];
        
        int mncount = INT_MAX;
        for(int i=1 ; i*i<=n ; i++){
            int count = 1 + helper(n-(i*i));
            mncount = min(count, mncount);
        }

        return dp[n] = mncount;
    }
    
    int numSquares(int n) {
        
        for(int i=0 ; i<10001 ; i++)   dp[i]=-1;
        return helper(n);
        
    }
};