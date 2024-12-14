class Solution {
public:
    
    vector<string> ans;
    
    void check(string digits, map<char, string> mp, int i, string str1){
        
        if(digits.length() == i){
            ans.push_back(str1);
            return; 
        }
        
        string str2 = mp[digits[i]];
        for(int j=0 ; j<str2.length() ; j++){
            str1[i] = str2[j];
            check(digits, mp, i+1, str1);
        }
        return;
        
    }
    
    vector<string> letterCombinations(string digits) {
       
        map<char, string> mp;
        mp['2'] = "abc"; mp['3'] = "def"; mp['4'] = "ghi"; mp['5'] = "jkl"; mp['6'] = "mno";
        mp['7'] = "pqrs"; mp['8'] = "tuv"; mp['9'] = "wxyz";
        
        if(digits.length() == 0)             return ans;   
        else if(digits.length() == 1)        check(digits, mp, 0, " ");
        else if(digits.length() == 2)        check(digits, mp, 0, "  ");
        else if(digits.length() == 3)        check(digits, mp, 0, "   ");
        else                                 check(digits, mp, 0, "    ");
        
        return ans;
    }
};