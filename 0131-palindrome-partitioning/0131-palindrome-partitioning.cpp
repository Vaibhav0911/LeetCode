class Solution {
public:
    
    vector<vector<string>> ans;
    
    string cp(string s, int i, int j){
        int l=i,h=j;
        while(l<h){
            if(s[l] != s[h])    return "/";
            l++; h--;
        }
        string str="";
        for( ; i<=j ; i++)      str += s[i];
        return str;
    }
    
    void check(string s, int i, vector<string> v){
        if(i == s.length()){
            ans.push_back(v);
            return;
        }
        for(int j=i ; j<s.length() ; j++){
            string str = cp(s, i, j);
            if(str != "/"){
                v.push_back(str);
                check(s, j+1, v);
                v.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        
        vector<string> v;
        check(s, 0, v);
        return ans;
    }
};