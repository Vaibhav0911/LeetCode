class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
       string sb="";
       int n=200,flag=1; 
       for(int i=0 ; i<strs.size() ; i++){
          if(strs[i].length() < n)    n=strs[i].length();
       }

       for(int i=0 ; i<n ; i++){
         char c = strs[0][i];
         for(int j=0 ; j<strs.size() ; j++){
            if(strs[j][i] != c){
                flag=0;
                break;
            }         
         }
         if(flag)     sb += c;
         else         break;
       }
       return sb;
    }
};