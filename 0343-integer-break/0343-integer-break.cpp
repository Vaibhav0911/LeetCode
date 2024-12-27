class Solution {
public:
    int integerBreak(int n) {
     
        if(n == 2)    return 1;
        if(n == 3)    return 2;
        
        vector<int> dp(n+1, 0);
        dp[0]=1;
        
        for(int i=1 ; i<=n ; i++){
            int mx=0;
            for(int j=1 ; j<=i ; j++){
                if(mx < j*dp[i-j])   mx = j*dp[i-j]; 
            }
            dp[i]=mx;
        }
        
        return dp[n];
        
    }
};