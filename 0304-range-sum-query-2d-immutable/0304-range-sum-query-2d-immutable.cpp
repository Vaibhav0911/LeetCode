class NumMatrix {

private:
        
    vector<vector<int> > sum;
    
public:
    
    NumMatrix(vector<vector<int>>& matrix) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        
        for(int i=0 ; i<m ; i++){
            vector<int> v;
            for(int j=0 ; j<n ; j++){
                v.push_back(0);
            }
            sum.push_back(v);
        }
        
        sum[0][0] = matrix[0][0];
        for(int i=1 ; i<m ; i++)        sum[i][0] = sum[i-1][0] + matrix[i][0];
        for(int j=1 ; j<n ; j++)        sum[0][j] = sum[0][j-1] + matrix[0][j];
        for(int i=1 ; i<m ; i++){
            for(int j=1 ; j<n ; j++)    
                sum[i][j] = matrix[i][j]+sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1];
        }
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
        if(row1 == 0 && col1 == 0)  return sum[row2][col2];
        else if(row1 == 0)          return sum[row2][col2]-sum[row2][col1-1];
        else if(col1 == 0)          return sum[row2][col2]-sum[row1-1][col2];
        
        return sum[row2][col2]-sum[row2][col1-1]-sum[row1-1][col2]+sum[row1-1][col1-1];
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */