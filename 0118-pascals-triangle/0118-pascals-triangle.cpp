class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans;
        vector<int> v;
        v.push_back(1);
        ans.push_back(v);
        
        if(numRows == 1)    return ans;
        
        v.push_back(1);
        ans.push_back(v);
        
        if(numRows == 2)    return ans;
        v.clear();
        
        for(int i=3 ; i<=numRows ; i++){
            for(int j=0 ; j<ans[i-2].size()-1 ; j++)   v.push_back(ans[i-2][j]+ans[i-2][j+1]);
            v.push_back(1);
            v.insert(v.begin(), 1);
            ans.push_back(v);
            v.clear();
        }
        
        return ans;
        
    }
};