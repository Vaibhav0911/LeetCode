class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        int element=0;
        
        int i=0,j=0;
        int m=n;
        
        while(m-i-1>0 && n-j-1>0){
            
            int i_it=m-i-1 , j_it=n-j-1;
            for( ; j<n-1 ; j++)               matrix[i][j] = ++element;
            for( ; i<m-1 ; i++)               matrix[i][j] = ++element;
            for( ; j_it>0 ; j_it--, j--)      matrix[i][j] = ++element;
            for( ; i_it>0 ; i_it--, i--)      matrix[i][j] = ++element;
            i += 1; j += 1; m -= 1; n -= 1;
            
        }
        
        if(m-i-1 == 0 && n-j-1 == 0)          matrix[i][j] = ++element;  
        else if(m-i-1 == 0 && n-j-1 > 0){
            for( ; j<n ; j++)                 matrix[i][j] = ++element;
        }
        else if(m-i-1 > 0 && n-j-1 == 0){
            for( ; i<m ; i++)                 matrix[i][j] = ++element;
        }
        
        return matrix;
    }
};