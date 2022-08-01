class Solution {
public:
    int solve(int m,int n,int g,int h,vector<vector<int>>& a,vector<vector<int>>& o){
        if(g>m-1||h>n-1){
          return 0;
        }
        if(o[g][h]==1)return 0;
        if(g==m-1&&h==n-1)return 1;
        if(a[g][h]!=0)return a[g][h];
        a[g][h]=solve(m,n,g+1,h,a,o)+solve(m,n,g,h+1,a,o);
        return a[g][h];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        return solve(obstacleGrid.size(),obstacleGrid[0].size(),0,0,obstacleGrid,obstacleGrid);
    }
};
