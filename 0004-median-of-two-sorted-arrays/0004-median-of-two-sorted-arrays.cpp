class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size();
        int m=nums2.size();
        double val;
        
        int nums3[n+m],i=0,j=0,k=0;
        while(i<n && j<m){
            if(nums1[i]<=nums2[j])      nums3[k++]=nums1[i++];
            else                        nums3[k++]=nums2[j++]; 
        }
        
        while(i<n)                      nums3[k++]=nums1[i++];
        while(j<m)                      nums3[k++]=nums2[j++];
        
        if((n+m)%2 != 0)                return (double)nums3[(n+m)/2];
        else                            
            return (double)(nums3[((n+m)/2)-1] + nums3[(n+m)/2])/2.0;
        
    }
};