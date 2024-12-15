class Solution {
public:
    vector<vector<int>> ans;
    
    void check(vector<int> arr, int k, int i, int n){
        
        if(arr.size() == k){
            ans.push_back(arr);
            return;
        }
        
        for(int j=i ; j<=n ; j++){
            arr.push_back(j);
            check(arr, k, j+1, n);
            arr.pop_back();
        }
        
    }
    
    vector<vector<int>> combine(int n, int k) {
        
        vector<int> arr;
        check(arr, k, 1, n);
        return ans;
    }
};