class Solution {
public:
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int sum=1000000000;
        int n=triangle.size();
        for(int i=0 ; i<n-1 ; i++){
            for(int j=0 ; j<=i+1 ; j++){
                if(j==0)       triangle[i+1][j] += triangle[i][j];
                else if(j>i)   triangle[i+1][j] += triangle[i][j-1];
                else           triangle[i+1][j] += min(triangle[i][j], triangle[i][j-1]);
            }
        }
        
        for(int j=0 ; j<n ; j++){
            if(triangle[n-1][j] < sum)     sum=triangle[n-1][j]; 
        }
        return sum;
    }
};