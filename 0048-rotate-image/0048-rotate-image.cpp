class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        cout<<n<<endl;
        for(int k=0 ; k<n/2 ; k++){
            for(int i=k, j=k ; j<n-k-1 ; j++){
                
                int l=0,m=0;
                int temp1=matrix[j][n-i-1], temp=matrix[i][j];
                matrix[j][n-i-1] = temp;
                l=j ; m=n-i-1; temp=temp1;
                i=l ; j=m;
                
                temp1 = matrix[j][n-i-1];
                matrix[j][n-i-1] = temp;
                l=j ; m=n-i-1; temp=temp1;
                i=l ; j=m;
                
                temp1 = matrix[j][n-i-1];
                matrix[j][n-i-1] = temp;
                l=j ; m=n-i-1; temp=temp1;
                i=l ; j=m;
                
                temp1 = matrix[j][n-i-1];
                matrix[j][n-i-1] = temp;
                l=j ; m=n-i-1; temp=temp1;
                i=l ; j=m;  
            }
        }
        
    }
};