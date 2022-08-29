class Solution {
public:
    void numbered(int* s,vector<vector<char>>& grid,int i,int j){
        if(i>grid.size()||j>grid[0].size()||i<0||j<0||grid[i][j]=='0') return ;
        grid[i][j]='0';
        *s=*s+1;
        if(j+1<grid[0].size()&&grid[i][j+1]=='1')trial(grid,i,j+1);
        if(i+1<grid.size()&&grid[i+1][j]=='1')trial(grid,i+1,j);
        if(i-1>=0&&grid[i-1][j]=='1')trial(grid,i-1,j);
        if(j-1>=0&&grid[i][j-1]=='1')trial(grid,i,j-1);
    }
    void trial(vector<vector<char>>& grid,int i,int j){
        if(i>grid.size()||j>grid[0].size()||i<0||j<0||grid[i][j]=='0') return ;
        grid[i][j]='0';
        if(j+1<grid[0].size()&&grid[i][j+1]=='1')trial(grid,i,j+1);
        if(i+1<grid.size()&&grid[i+1][j]=='1')trial(grid,i+1,j);
        if(i-1>=0&&grid[i-1][j]=='1')trial(grid,i-1,j);
        if(j-1>=0&&grid[i][j-1]=='1')trial(grid,i,j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int s=0;
        for(int i=0;i<grid.size();i++)
        for(int j=0;j<grid[0].size();j++)numbered(&s,grid,i,j);
        return s;
    }
};
