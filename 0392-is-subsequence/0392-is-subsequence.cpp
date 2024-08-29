class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.length();
        int m=t.length();

        if(n>m)      return false;

        int j=0;
        for(int i=0 ; i<m ; i++){
            if(j == n)                  return true;
            if(t[i] == s[j])            j++;   
        }

        if(j == n)                  return true;
        return false;

    }
};