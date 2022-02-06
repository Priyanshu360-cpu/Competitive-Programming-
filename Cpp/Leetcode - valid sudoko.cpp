class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=i+1;j<board.size();j++){
                if(board[i][i]=='.') continue;
                if(board[i][i]==board[j][i]) return false;
            }
            for(int j=0;j<board[i].size();j++){
                for(int k=j+1;k<board[i].size();k++){
                    if(board[i][j]=='.') continue;
                    if(board[i][j]==board[i][k]) return false;
                }
            }
        }
        return true;
    }
};
