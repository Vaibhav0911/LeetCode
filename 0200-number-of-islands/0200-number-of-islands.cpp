class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> ch(m, vector<int>(n, 0));
        int ans=0;
        
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                
                if(ch[i][j] == 0 && grid[i][j] == '1'){
                    ans++;
                    vector<pair<int, int>> v;
                    v.push_back(make_pair(i,j));
                    while(!v.empty()){
                        pair<int, int> p = v[v.size()-1];
                        v.pop_back();
                        int f=p.first, s=p.second;
                        ch[f][s]=1; 
                        if(f>0 && grid[f-1][s]=='1' && ch[f-1][s]==0)
                            v.push_back(make_pair(f-1, s));
                        if(s>0 && grid[f][s-1]=='1' && ch[f][s-1]==0)
                            v.push_back(make_pair(f, s-1)); 
                        if(f<m-1 && grid[f+1][s]=='1' && ch[f+1][s]==0)
                            v.push_back(make_pair(f+1, s));
                        if(s<n-1 && grid[f][s+1]=='1' && ch[f][s+1]==0)
                            v.push_back(make_pair(f, s+1));
                    }
                }
                
            }
        }
        return ans;
        
    }
};