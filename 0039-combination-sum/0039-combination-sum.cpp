class Solution {
public:
    
    vector<vector<int>> ans;
    
    void check(vector<int> cand, vector<int> arr, int target, int sum, int i){
        
        if(sum > target)             return;
        if(sum == target){
            ans.push_back(arr);
            return;
        }
        
        for(int j=i ; j<cand.size() ; j++){
            int val = cand[j];
            arr.push_back(val);
            sum += val;
            check(cand, arr, target, sum, j);
            arr.pop_back();
            sum -= val;
        }
        return;
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int> arr;
        check(candidates, arr, target, 0, 0);
        return ans;
        
    }
};