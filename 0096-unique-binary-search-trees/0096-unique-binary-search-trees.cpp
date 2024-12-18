class Solution {
public:
    int numTrees(int n) {
       
        vector<int> arr(20,0);
        arr[0] = 1;
        arr[1] = 1;
        for(int i=2 ; i<=n ; i++){
            for(int j=1 ; j<=i ; j++)
                arr[i] += arr[j-1]*arr[i-j];
        }
        return arr[n];
        
    }
};