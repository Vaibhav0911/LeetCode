class Solution {
public:
    bool isPalindrome(int x) {
       
        if(x < 0)       return false; 
        long long y=0,n=x;
        while(n){
            y = y*10 + n%10;
            n /= 10;
        }
        
        if(x == y)      return true;
        else            return false; 
    }
};