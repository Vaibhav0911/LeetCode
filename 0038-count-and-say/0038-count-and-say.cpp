class Solution {
public:
    string countAndSay(int n) {
        
        string ans="1";
        for(int i=2 ; i<=n ; i++){
            string val="";
            int c=1;
            for(int j=0 ; j<ans.length()-1 ; j++){
                if(ans[j] != ans[j+1]){
                    val += to_string(c) + ans[j];
                    c = 1;
                }
                else   c++;
            }
            val += to_string(c) + ans[ans.length()-1];
            ans = val;
        }
        return ans;
    }
};