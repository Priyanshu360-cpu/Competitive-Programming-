class Solution {
public:
    int minsum(vector<vector<int>>& dp,vector<vector<int>>& grid,int i,int j){
        if(dp[i][j]) return dp[i][j];
        if(i>0&&j>0)
            dp[i][j]=min(minsum(dp,grid,i-1,j),minsum(dp,grid,i,j-1))+grid[i][j];
               else if(j>0){
                    dp[i][j]=minsum(dp,grid,i,j-1)+grid[i][j];
               }else if(i>0){
                   dp[i][j]=minsum(dp,grid,i-1,j)+grid[i][j];
               }
               else return grid[i][j];
               return dp[i][j];
    }
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(),vector<int>(grid[0].size(),0));
        return minsum(dp,grid,grid.size()-1,grid[0].size()-1);
    }
};
