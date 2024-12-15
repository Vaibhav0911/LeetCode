class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        int n=strs.size();
        vector<vector<int>> arr(n, vector<int>(26, 0));
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<strs[i].length() ; j++){
                char ch = strs[i][j];
                arr[i][ch-'a']++;
            }
        }
        
        vector<vector<string>> ans;
        vector<string> an;
        vector<int> freq(10001, 1);
        for(int i=0 ; i<strs.size() ; i++){
            
            if(freq[i] == 0)       continue;
            an.push_back(strs[i]);
            for(int j=i+1 ; j<strs.size() ; j++){
                if(freq[j] == 0)   continue;
                if(arr[i] == arr[j]){
                    an.push_back(strs[j]);
                    freq[j]=0;
                }
            }
            ans.push_back(an);
            an.clear();
            freq[i]=0;
        }
        
        return ans;
        
    }
};