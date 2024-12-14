class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        vector<string> ans;
        ans.push_back("()");
        for(int i=2 ; i<=n ; i++){
            set<string> temp;
            for(auto str : ans){
                for(int j=0 ; j<=str.length() ; j++){
                    string temp1 = str;
                    temp1.insert(j, "()");
                    temp.insert(temp1);
                }
            }
            ans.clear();
            for(auto str : temp)     ans.push_back(str);            
        }
        
        return ans;       
    }
};