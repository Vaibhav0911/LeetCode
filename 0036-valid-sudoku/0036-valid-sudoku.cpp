class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0 ; i<9 ; i++){
            vector<int> freq(10,0);
            for(int j=0 ; j<9 ; j++){
                if(board[i][j] != '.'){
                        freq[board[i][j]-'0']++;
                        if(freq[board[i][j]-'0'] == 2)   return false;
                }
            }
        }
        
        for(int i=0 ; i<9 ; i++){
            vector<int> freq(10,0);
            for(int j=0 ; j<9 ; j++){
                if(board[j][i] != '.'){
                        freq[board[j][i]-'0']++;
                        if(freq[board[j][i]-'0'] == 2)   return false;
                }
            }
        }
        
        for(int i=0,j=0 ; i!=9 || j!=0 ; ){
            
            // if((board[i][j]=='.' && board[i][j+1]=='.' && board[i][j+2]=='.') || 
            //    (board[i+1][j]=='.' && board[i+1][j+1]=='.' && board[i+1][j+2]=='.') ||
            //   (board[i+2][j]=='.' && board[i+2][j+1]=='.' && board[i+2][j+2]=='.') || 
            //   (board[i][j]=='.' && board[i+1][j]=='.' && board[i+2][j]=='.') || 
            //   (board[i][j+1]=='.' && board[i+1][j+1]=='.' && board[i+2][j+1]=='.') || 
            //   (board[i][j+2]=='.' && board[i+1][j+2]=='.' && board[i+2][j+2]=='.')){
            //     if(j==6)     i += 3;        
            //     j=(j+3)%9;
            //     continue;
            // }
                  
            vector<int> freq(10,0);
            for(int k=i ; k<i+3 ; k++){
                for(int l=j ; l<j+3 ; l++){
                    if(board[k][l] != '.'){
                        freq[board[k][l]-'0']++;
                        if(freq[board[k][l]-'0'] == 2)   return false;
                    }
                }
            }
            
            if(j==6)     i += 3;        
            j=(j+3)%9;
        }
        
        return true;
    }
};