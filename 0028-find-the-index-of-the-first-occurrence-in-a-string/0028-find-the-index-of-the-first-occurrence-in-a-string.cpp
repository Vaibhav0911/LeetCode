class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();
        int i=0,j=0,k=0;
        while(i<n){
           if(haystack[i]==needle[j]){
            if(j==m-1)     return i-j;
            i++; j++;
           }  
           else{  
               i = ++k; 
               j=0;
                 
           }
        }

        return -1;

    }
};