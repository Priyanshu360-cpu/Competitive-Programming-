class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       
        int s=matrix.size()-1;
        for(int i=0;i<matrix[0].size();i++){
             vector<int> a;
            for(int j=s;j>=0;j--){
                a.push_back(matrix[j][i]);
            }
            matrix.push_back(a);
        }
        int j=0;
        int g=matrix.size()-1;
        for(int i=s+1;i<=g;i++){
            matrix[j]=matrix[i];
            j=j+1;
        }
        for(int i=0;i<=s;i++){
            matrix.pop_back();
        }
    }
};
