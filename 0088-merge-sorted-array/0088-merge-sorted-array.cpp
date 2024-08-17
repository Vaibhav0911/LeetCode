class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        vector<int> finals;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                finals.push_back(nums1[i]);
                i++;
            }      
            else{
                finals.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m){
            finals.push_back(nums1[i]);
            i++;
        } 
        while(j<n){
            finals.push_back(nums2[j]);
            j++;
        }

        int k=0;
        for(auto i: finals)       nums1[k++] = i;

    }
};