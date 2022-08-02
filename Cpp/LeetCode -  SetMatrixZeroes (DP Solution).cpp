class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<bool>> a(matrix.size()+1,vector<bool>(matrix[0].size()+1,true));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0&&a[i][j]==true){
                    a[i][j]=false;
                    for(int k=0;k<matrix[0].size();k++){
                        if(matrix[i][k]==0)continue;
                        else{
                            matrix[i][k]=0;
                            a[i][k]=false;
                        }
                    }
                    for(int g=0;g<matrix.size();g++){
                        if(matrix[g][j]==0) continue;
                        else{
                            matrix[g][j]=0;
                            a[g][j]=false;
                        }
                    }
                }
            }
        }
    }
};
