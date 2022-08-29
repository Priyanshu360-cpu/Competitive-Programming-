class Solution {
public:
     int finder(vector<vector<int>>& dp,vector<vector<int>>& matrix,int i,int j,int m,map<pair<int,int>,int>& a){
        if(i>=matrix.size()||j>=matrix[0].size()||j<0||i<0||matrix[i][j]<=m)return 0;
        if(dp[i][j]!=0)return dp[i][j];
        if(a[pair(i,j)]==0)a[pair(i,j)]=1;
        else return 0;
        dp[i][j]=1+finder(dp,matrix,i+1,j,matrix[i][j],a)%1000000007+finder(dp,matrix,i-1,j,
        matrix[i][j],a)%1000000007+finder(dp,matrix,i,j+1,matrix[i][j],a)%1000000007+finder(dp,matrix,i,j-1,matrix[i][j],a)%1000000007;
  return dp[i][j]%1000000007;
    }
    int countPaths(vector<vector<int>>& matrix) {
         vector<vector<int>> dp(matrix.size(),vector<int>(matrix[0].size(),0));
        int m=0;
        for(int i=0;i<matrix.size();i++)
            for(int j=0;j<matrix[0].size();j++){
                map<pair<int,int>,int> a;
                m=m%1000000007+finder(dp,matrix,i,j,INT_MIN,a)%1000000007;
            }
        return m%1000000007;
    }
};
