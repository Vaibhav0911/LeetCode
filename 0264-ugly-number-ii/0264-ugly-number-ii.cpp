class Solution {
public:
    int nthUglyNumber(int n) {
        
        vector<int> ugly(n+1, 0);
        int i2=1, i3=1, i5=1;
        ugly[1]=1;
        
        for(int i=2 ; i<=n ; i++){
            
            if(ugly[i2]*2 < ugly[i3]*3){
                if(ugly[i2]*2 < ugly[i5]*5){
                   ugly[i] = ugly[i2]*2;
                   i2++;
                }
                else if(ugly[i2]*2 > ugly[i5]*5){
                   ugly[i] = ugly[i5]*5;
                   i5++;
                }
                else{
                   ugly[i] = ugly[i5]*5;
                   i2++; i5++;
                }
            }
            else if(ugly[i2]*2 > ugly[i3]*3){
                if(ugly[i3]*3 < ugly[i5]*5){
                   ugly[i] = ugly[i3]*3;
                   i3++;
                }
                else if(ugly[i3]*3 > ugly[i5]*5){
                   ugly[i] = ugly[i5]*5;
                   i5++;
                }
                else{
                   ugly[i] = ugly[i5]*5;
                   i3++; i5++;
                }
            }
            else{
                if(ugly[i3]*3 < ugly[i5]*5){
                   ugly[i] = ugly[i3]*3;
                   i3++; i2++;
                }
                else if(ugly[i3]*3 > ugly[i5]*5){
                   ugly[i] = ugly[i5]*5;
                   i5++;
                }
                else{
                   ugly[i] = ugly[i5]*5;
                   i3++; i5++; i2++;
                }
            }  
        }
        
        return ugly[n];
        
    }
};