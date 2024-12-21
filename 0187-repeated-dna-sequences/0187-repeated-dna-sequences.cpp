class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        vector<string> ans;
        unordered_map<string, int> mp;
        
        if(s.length() < 10)   return ans;
        
        for(int i=0 ; i<s.length()-9 ; i++){
            string st = s.substr(i,10);
            if(mp.find(st) == mp.end())    mp[st]=1;
            else{
                if(mp[st] == 1){
                    ans.push_back(st);
                    mp[st]++;
                }
            }
        }
        return ans;
        
    }
};