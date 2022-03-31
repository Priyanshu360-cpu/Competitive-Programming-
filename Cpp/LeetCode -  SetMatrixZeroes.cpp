class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int t=2147483645;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<matrix.size();k++){
                        if(matrix[i][k]==0||matrix[k][j]==0)continue;
                            matrix[i][k]=t;matrix[k][j]=t;}
                    break;
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
                for(int j=0;j<matrix.size();j++){
                    if(matrix[i][j]==t)matrix[i][j]=0;
                }
            }
    }
};
