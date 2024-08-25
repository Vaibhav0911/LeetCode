class Solution {
public:
    int lengthOfLastWord(string s) {
        
       int sp=0;
       vector<char> ans;

       for(int i=0 ; i<s.length() ; i++){
        if(s[i] == ' ')      sp = 1;
        else if( ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) && sp == 1){
            ans.clear();
            sp=0;
            ans.push_back(s[i]);
        }
        else           ans.push_back(s[i]);             
       }

       return ans.size();

    }
};