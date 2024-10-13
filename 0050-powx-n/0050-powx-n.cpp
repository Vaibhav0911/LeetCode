class Solution {
public:
    double myPow(double x, long long n) {
        
        if(n == 0){
            return (double)(1);
        }
        
        else if(n < 0){
            n *= (-1);
            double b=x,e=1;
            while(e+e <= n){
                b = b*b;
                e = e+e;
            }
            for(long long i=e ; i<n ; i++)    b *= x;
            return 1/b;
        }
        else{
            double b=x,e=1;
            while(e+e <= n){
                b = b*b;
                e = e+e;
            }
            for(long long i=e ; i<n ; i++)    b *= x;
            return b;
        }
        
    }
};