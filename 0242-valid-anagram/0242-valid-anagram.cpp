class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int n=s.length();
        int m=t.length();

        if(n!=m)      return false;

        map<char,int> mp;

        for(int i=0 ; i<n ; i++)       mp[s[i]]++;

        for(int i=0 ; i<m ; i++){
            if(mp.find(t[i]) == mp.end() || mp[t[i]] == 0)     return false;
            mp[t[i]]--;
        }

        return true;
    }
};