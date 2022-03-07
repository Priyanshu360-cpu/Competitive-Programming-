class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
         int c=0;
        char d;
        char*e;
        for(int i=0;i<board.size();i++){
            c=0;
           for(int j=0;j<board.size();j++){
              d=board[i][j];
              if(d=='.') continue;
               for(int k=0;k<board.size();k++){
                   if(d==board[j][k]||d==board[k][j])c=c+1;
               }
             
           }
            if(c!=2){break;}
        }
        if(c!=3)return false;
        else return true;
    }
};
