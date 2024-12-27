class Solution {
public:
    vector<int> countOfPairs(int n, int x, int y) {
        
        vector<vector<int>> arr(n+1, vector<int>(n+1, 1000000000));
        
        for(int i=1 ; i<n ; i++){
            arr[i][i+1]=1;
            arr[i+1][i]=1;
        }
        
        arr[x][y]=1;
        arr[y][x]=1;
        
        for(int via=1 ; via<=n ; via++){
            for(int i=1 ; i<=n ; i++){
                for(int j=1 ; j<=n ; j++){
                    if(i==j)       arr[i][j] = 0;
                    else           arr[i][j] = min(arr[i][j], arr[i][via]+arr[via][j]);
                }
            }
        }
        
        vector<int> ans(n,0);
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=n ; j++){
                if(arr[i][j]>0)   ans[arr[i][j]-1]++;
            }
        }
        
        return ans;
        
    }
};