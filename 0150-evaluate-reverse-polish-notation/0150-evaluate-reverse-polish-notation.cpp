class Solution {
public:
    
    int conv(string s){
        
        int i, ans=0;
        if(s[0] == '-')     i=1;
        else                i=0;
        for( ; i<s.length() ; i++)    ans = ans*10 + (s[i]-'0');
        
        if(s[0] == '-')    return ans*(-1);
        
        return ans;
        
    }
    
    int evalRPN(vector<string>& tokens) {
        
        stack<int> s;
        for(int i=0 ; i<tokens.size() ; i++){
            if(tokens[i] == "+"){
                int o2 = s.top();
                s.pop();
                int o1 = s.top();
                s.pop();
                s.push(o1+o2);
            }
            else if(tokens[i] == "-"){
                int o2 = s.top();
                s.pop();
                int o1 = s.top();
                s.pop();
                s.push(o1-o2);
            }
            else if(tokens[i] == "*"){
                int o2 = s.top();
                s.pop();
                int o1 = s.top();
                s.pop();
                s.push(o1*o2);
            }
            else if(tokens[i] == "/"){
                int o2 = s.top();
                s.pop();
                int o1 = s.top();
                s.pop();
                s.push(o1/o2);
            }
            else{
                s.push(conv(tokens[i]));
            }
        }
        return s.top();
        
    }
};