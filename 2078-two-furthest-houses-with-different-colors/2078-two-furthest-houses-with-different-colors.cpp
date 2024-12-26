class Solution {
public:
    int maxDistance(vector<int>& colors) {
        
        int mx1=0, mx2=0, n=colors.size();
        for(int i=1 ; i<n ; i++){
            if(colors[0] != colors[i])       mx1 = i;   
        }
        for(int i=n-2 ; i>=0 ; i--){
            if(colors[n-1] != colors[i])     mx2 = n-1-i;   
        }
        
        return max(mx1, mx2);
        
    }
};