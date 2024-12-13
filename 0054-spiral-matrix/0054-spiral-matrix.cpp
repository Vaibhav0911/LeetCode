class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
  
        vector<int> ans;
        int i=0,j=0;
        int m=matrix.size();
        int n=matrix[0].size();
        
        while(m-i-1>0 && n-j-1>0){
            
            int i_it=m-i-1 , j_it=n-j-1;
            for( ; j<n-1 ; j++)             ans.push_back(matrix[i][j]);
            for( ; i<m-1 ; i++)             ans.push_back(matrix[i][j]);
            for( ; j_it>0 ; j_it--, j--)    ans.push_back(matrix[i][j]);
            for( ; i_it>0 ; i_it--, i--)    ans.push_back(matrix[i][j]);
            i += 1; j += 1; m -= 1; n -= 1;
            
        }
        
        if(m-i-1 == 0 && n-j-1 == 0)        ans.push_back(matrix[i][j]);  
        else if(m-i-1 == 0 && n-j-1 > 0){
            // n=n-j;
            for( ; j<n ; j++)              ans.push_back(matrix[i][j]);
        }
        else if(m-i-1 > 0 && n-j-1 == 0){
            // m=m-i;
            for( ; i<m ; i++)              ans.push_back(matrix[i][j]);
        }
        
        return ans;
    }
};