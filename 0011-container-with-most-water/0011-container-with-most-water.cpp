class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int l=0,r=height.size()-1,mx=0;
        while(l<r){
            int a = min(height[l],height[r])*(r-l);
            if(mx<a)   mx=a;
            if(height[l] > height[r])    r--;
            else                         l++;           
        }
        return mx;
        
    }
};