class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        
        int m=board.size();
        int n=board[0].size();
        
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(board[i][j] == 1)    board[i][j]=2; 
            }
        }
        
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                
                int alive=0, live=0;
                
                if(i>0){
                    if(board[i-1][j] == 0 || board[i-1][j] == 1)        alive++;
                    else                                                live++;
                }
                if(i<m-1){
                    if(board[i+1][j] == 0 || board[i+1][j] == 1)        alive++;
                    else                                                live++;
                }
                if(j>0){
                    if(board[i][j-1] == 0 || board[i][j-1] == 1)        alive++;
                    else                                                live++;
                }
                if(j<n-1){
                    if(board[i][j+1] == 0 || board[i][j+1] == 1)        alive++;
                    else                                                live++;
                }
                if(i>0 && j>0){
                    if(board[i-1][j-1] == 0 || board[i-1][j-1] == 1)    alive++;
                    else                                                live++;
                }
                if(i>0 && j<n-1){
                    if(board[i-1][j+1] == 0 || board[i-1][j+1] == 1)    alive++;
                    else                                                live++;
                }
                if(i<m-1 && j>0){
                    if(board[i+1][j-1] == 0 || board[i+1][j-1] == 1)    alive++;
                    else                                                live++;
                }
                if(i<m-1 && j<n-1){
                    if(board[i+1][j+1] == 0 || board[i+1][j+1] == 1)    alive++;
                    else                                                live++;
                }
                
                if(board[i][j] == 2){
                    if(live == 2 || live == 3)                          board[i][j]=3;
                }
                else{
                    if(live == 3)                                       board[i][j]=1;
                }
                
            }
        }
        
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(board[i][j] == 3)     board[i][j]=1;
                if(board[i][j] == 2)     board[i][j]=0;
            }
        }
        
    }
};