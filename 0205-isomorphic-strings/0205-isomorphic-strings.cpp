class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        map<char,bool> check;
        map<char,char> mp;

        for(int i=0 ; i<s.length() ; i++){
           if(mp.find(s[i]) == mp.end()){ 
             if(check.find(t[i]) == check.end()){
                mp[s[i]] = t[i];
                check[t[i]] = true;
             }
             else{
                return false;                
             }
           }
           else{
             if(mp[s[i]] != t[i])        return false;    
           }
        } 

        return true;

    }
};