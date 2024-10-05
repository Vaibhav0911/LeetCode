class Solution {
public:
    string reverseWords(string s) {
        
        vector<string> v;
        string str="";
        for(int i=0 ; i<s.length() ; i++){
            if(s[i] == ' ' && str.length() != 0){
                v.push_back(str);
                str="";
            }
            else if(s[i] != ' '){
                str += s[i];
            }
        }
        
        if(str.length() != 0){
                v.push_back(str);
                str="";
        }
        
        for(int i=v.size()-1 ; i>=0 ; i--){
           if(i == 0)    str = str + v[i];
           else          str = str + v[i] + " "; 
        }
        
        return str;
    }
};