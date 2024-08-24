class Solution {
public:
    int romanToInt(string s) {
        
        int c=0;
        int n=s.length();

        unordered_map<char, int> m;

        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;

        for(int i=0 ; i<n ; i++){

           if(m[s[i]] < m[s[i+1]]){
            c -= m[s[i]];
           }
           else{
            c += m[s[i]];
           }

        }
        

        return c;

    }
};