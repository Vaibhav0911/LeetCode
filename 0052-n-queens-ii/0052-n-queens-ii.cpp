class Solution {
public:
    
     int d_ans=0;
    
     void check(vector<string> arr, int n, int i){
        
        if(i==n){
            for(int j=0 ; j<n ; j++){
                for(int k=0 ; k<n ; k++){ 
                    if(arr[j][k] == 'F')    arr[j][k]='.';
                }
            }

            d_ans++;
            
            return;
        }
        
        for(int j=0 ; j<n ; j++){
            if(arr[i][j] == 'F'){
                continue;
            }
            else{
                
                vector<string> arr1 = arr;
                arr[i][j] = 'Q';
                
                for(int k=i+1 ; k<n ; k++)      arr[k][j]='F';
                for(int k=i+1, l=j+1 ; k<n && l<n ; k++, l++)    arr[k][l]='F';
                for(int k=i+1, l=j-1 ; k<n && l>=0 ; k++, l--)   arr[k][l]='F';
                
                check(arr, n, i+1);
                
                arr = arr1;
                
            }
        }
        return;
        
     }
    
    int totalNQueens(int n) {
       
        vector<string> s;
        string str="";
        for(int i=0 ; i<n ; i++)         str += '.';
        for(int j=0 ; j<n ; j++)         s.push_back(str);        
        
        check(s, n, 0);
        return d_ans;
        
    }
};