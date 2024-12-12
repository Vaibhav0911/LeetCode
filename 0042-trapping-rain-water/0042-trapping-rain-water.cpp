class Solution {
public:
    int trap(vector<int>& height) {
       
        int n = height.size();
        int sum=0, i=0,mx=0,mxind;
        for(int j=i+1 ; j<n ; j++){
            if(height[i] <= height[j]){
                for(int k=i+1 ; k<j ; k++)    sum += height[i]-height[k];
                cout<<sum<<endl;
                i = j;
                mx=0;
                continue;
            }
            else if(height[j]>= mx){
                mx = height[j];
                mxind = j;
            }
            if(j == n-1){
                for(int k=i+1 ; k<mxind ; k++)   sum += mx - height[k];
                i = mxind;
                j = i;
                mx=0;
            }
            
        }
        return sum;
    }
};