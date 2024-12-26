class Solution {
public:
    string reverseVowels(string s) {
        
        int l=0, h=s.length()-1;
        while(l<h){
            while(l<h){
                if(s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u' ||
                   s[l] == 'A' || s[l] == 'E' || s[l] == 'I' || s[l] == 'O' || s[l] == 'U')
                       break;
                l++;
            }
            while(l<h){
                if(s[h] == 'a' || s[h] == 'e' || s[h] == 'i' || s[h] == 'o' || s[h] == 'u' ||
                   s[h] == 'A' || s[h] == 'E' || s[h] == 'I' || s[h] == 'O' || s[h] == 'U')
                       break;
                h--;
            }
            if(l>=h)   break;
            
            char temp = s[l];
            s[l] = s[h];
            s[h] = temp;
            l++; h--;
        }
        return s;
    }
};