class Solution {
public:
    bool isHappy(int n) {
        
      map<long long,bool> mp;

      while(1){

         if(n == 1)        break;

         if(mp.find(n) != mp.end())       return false;

         mp[n] = true;

         long long k=0;
         while(n){
            k += ((n%10)*(n%10));
            n /= 10;
         }
         n = k; 
      }

      return true;

    }
};