class Solution {
public:
    
    string conv(int n){
        
        if(n == 0)   return "0";
        string ans="";
        while(n){
            ans = (char)((n%10)+'0') + ans;
            n = n/10;
        }
        return ans;
    }
        
    string getHint(string secret, string guess) {
        
        vector<int> s(10,0), g(10,0);
        int c=0, b=0;
        for(int i=0 ; i<secret.length() ; i++){
            if(secret[i] == guess[i])   b++;
            s[secret[i]-'0']++;
            g[guess[i]-'0']++;
        }
        for(int i=0 ; i<=9 ; i++)   c += min(g[i], s[i]);
        c -= b;
        
        string x=conv(b), y=conv(c);
        return x+'A'+y+'B';
    }
};