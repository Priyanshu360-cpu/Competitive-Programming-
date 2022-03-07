class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
         int c=0;
        char d;
        char*e;
        for(int i=0;i<board.size();i++){
           for(int j=0;j<board.size();j++){
              d=board[i][j];
               e=&(board[i][j]);
              for(int k=0;k<board.size();k++){
                  if(d==board[i][k]&&(e!=(&(board[i][k])))||(d==board[i][k]&&(e!=(&(board[i][k]))))){
                       if(d=='.') continue;
                      c=1;
                      break;
                  }
              }
           }
          
        }
        
        if(c==1)return false;
        else return true;
    }
};
