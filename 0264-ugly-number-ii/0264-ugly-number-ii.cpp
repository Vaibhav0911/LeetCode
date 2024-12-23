class Solution {
public:
    int nthUglyNumber(int n) {
        
        vector<int> ugly(n+1, 0);
        int i2=1, i3=1, i5=1;
        ugly[1]=1;
        
        for(int i=2 ; i<=n ; i++){
            
            vector<int> v = {ugly[i2]*2, ugly[i3]*3, ugly[i5]*5};
            
            int mn = min(v[0], min(v[1], v[2]));
            
            ugly[i] = mn;
            
            if(v[0] == mn)    i2++;
            if(v[1] == mn)    i3++;
            if(v[2] == mn)    i5++;
             
        }
        
        return ugly[n];
        
    }
};