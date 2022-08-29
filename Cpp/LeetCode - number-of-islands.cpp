class Solution {
public:
    int numbered(vector<vector<int>>& dp,vector<vector<char>> grid,int i,int j){
        if(i>grid.size()||j>grid[0].size()) return 1;
        if(i<0||j<0) return 1;
        if(grid[i][j]=='0')return 0;
        if(dp[i][j]!=0) return dp[i][j];
        int a=0;
        grid[i][j]='0';
        if(j+1<grid[0].size()&&grid[i][j+1]=='1'){
            a+=1;
            dp[i][j]+=numbered(dp,grid,i,j+1);
        }
        if(i+1<grid.size()&&grid[i+1][j]=='1'){
            a+=1;
            dp[i][j]+=numbered(dp,grid,i+1,j);
        }
        if(i-1>=0&&grid[i-1][j]=='1'){
            a+=1;
            dp[i][j]+=numbered(dp,grid,i-1,j);
        }
        if(j-1>=0&&grid[i][j-1]=='1'){
            a+=1;
            dp[i][j]+=numbered(dp,grid,i,j-1);
            
        }
        if(a==0)
            dp[i][j]=1;
        return dp[i][j];
    }
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>> dp(grid.size(),vector<int>(grid[0].size(),0));
        int s=0;
        for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++)cout<<dp[i][j];
        }
        s=s+numbered(dp,grid,0,0);
        return s||1;
    }
};
