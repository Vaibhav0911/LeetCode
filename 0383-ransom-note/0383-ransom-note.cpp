class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
       vector<int> v(26,0);
       int n=ransomNote.length();
       int m=magazine.length();
       for(int i=0 ; i<n ; i++){
        v[ransomNote[i]-'a']++;
       }

       for(int i=0 ; i<m ; i++){
        if(v[magazine[i]-'a'] > 0)    v[magazine[i]-'a']--;
       }

       for(int i=0 ; i<26 ; i++){
        if(v[i] != 0)        return false;
       }

       return true;

    }
};