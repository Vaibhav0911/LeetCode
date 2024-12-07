class Solution {
public:
    
//     int mxsum=1000000000;
//     void check(vector<vector<int>>& grid, int i, int j, int sum){
        
//         if(grid[0].size() == j || grid.size() == i)   return;
        
//         sum += grid[i][j];
        
//         if(grid[0].size()-1 == j && grid.size()-1 == i){
//             if(sum < mxsum)   mxsum=sum;
//             return;
//         }
        
//         check(grid, i, j+1, sum);
//         check(grid, i+1, j, sum);
        
//     }
    int minPathSum(vector<vector<int>>& grid) {
        
//         check(grid, 0, 0, 0);
//         return mxsum;
        
        int m = grid.size();
        int n = grid[0].size();
        
        for(int i=m-2, j=n-2 ; i>=0 || j>=0 ; i--, j--){
            if(i>=0)         grid[i][n-1] += grid[i+1][n-1];
            if(j>=0)         grid[m-1][j] += grid[m-1][j+1];
        }
        
        for(int i=m-2 ; i>=0 ; i--){
            for(int j=n-2 ; j>=0 ; j--){
                if(grid[i+1][j] > grid[i][j+1])    grid[i][j] += grid[i][j+1];
                else                               grid[i][j] += grid[i+1][j]; 
            }
        }
        
        return grid[0][0];
        
    }
};