class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        
        int rl=0,rh=m-1,rmid;
        while(rl <= rh){
            rmid = (rl+rh)/2;
            if(matrix[rmid][0]<=target && matrix[rmid][n-1]>=target)    break;
            else if(matrix[rmid][0] > target)     rh = rmid-1;
            else                                  rl = rmid+1;
        }
        if(rl>rh)   return false;
        
        int cl=0,ch=n-1,cmid;
        while(cl <= ch){
            cmid = (cl+ch)/2;
            if(matrix[rmid][cmid] == target)        return true;
            else if(matrix[rmid][cmid] > target)    ch = cmid-1;
            else                                    cl = cmid+1;
        }
        return false;
        
    }
};