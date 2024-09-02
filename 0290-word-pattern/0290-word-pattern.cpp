class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> ss;
        for(int i=0 ; i<s.length() ; i++){
            string c="";
            while(s[i] >= 'a' && s[i] <= 'z'){
                c += s[i];
                i++;
            }
            ss.push_back(c);
        }

        if(ss.size() != pattern.length())        return false;

        map<char, string> mp;
        map<string, bool> check;
        for(int i=0 ; i<pattern.length() ; i++){
            if(mp.find(pattern[i]) == mp.end()){
                if(check.find(ss[i]) == check.end()){
                    mp[pattern[i]] = ss[i];
                    check[ss[i]] = true;
                }
                else         return false;
            }
            else{
                if(mp[pattern[i]] != ss[i])    return false;
            }
        } 

        return true;

    }
};