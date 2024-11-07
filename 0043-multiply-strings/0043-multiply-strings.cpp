class Solution {
public:
    string multiply(string num1, string num2) {
        
        if(num1 == "0" || num2 == "0")          return "0";
        int n=num1.length(), m=num2.length();
        int i=n-1, j=m-1, carry=0;
        string str="";
        
        while(j != -1){
            int val=0;
            for(int k=i, l=j ; k<n && l>=0 ; k++, l--)    val += (num1[k]-'0')*(num2[l]-'0');
            val += carry;
            carry = val/10;
            val = val%10;
            str = (char)(val+'0') + str;
            
            if(i != 0)   i--;
            else         j--;
        }
        
        while(carry != 0){
            str = (char)((carry%10) + '0') + str;
            carry = carry/10;
        }
        
        return str;
        
    }
};