class Solution {
public:
    
    vector<vector<int>> ans;
    void comb(int k, int n, int i, vector<int> arr, int sum){
        
        if(arr.size() == k){
            if(sum == n)    ans.push_back(arr);
            return;
        }
        
        for(int j=i ; j<=9 ; j++){
            if(sum+j > n)   break;
            arr.push_back(j);
            comb(k, n, j+1, arr, sum+j);
            arr.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<int> arr;
        comb(k, n, 1, arr, 0);
        return ans;
        
    }
};