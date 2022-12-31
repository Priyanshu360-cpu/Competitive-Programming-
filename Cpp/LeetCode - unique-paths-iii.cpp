/*
# Intuition
Visit all the sides using Dfs

# Approach
Visit all the sides and mark the visited nodes as danger nodes. add all the paths from the 4 sides and return them.

# Code
```
*/
class Solution {
public:
pair<int,int> p;
int s=0;
int solution(vector<vector<int>> grid,int i,int j,int c){
    if(i>=grid.size()||j>=grid[i].size()||i<0||j<0)return 0;
    if(grid[i][j]==3||grid[i][j]==-1)return 0;
        if(grid[i][j]==2){
            if(c-1==s)//if all paths are covered
            return 1;
            else return 0;
        }
        grid[i][j]=-1;//marking as dangerous node
        return solution(grid,i+1,j,c+1)+solution(grid,i,j+1,c+1)+solution(grid,i-1,j,c+1)+solution(grid,i,j-1,c+1);//finding all the paths        
}
    int uniquePathsIII(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    p={i,j};//finding starting position
                }
                if(grid[i][j]==0){
                    s+=1;//finding empty cells
                }
            }
        }
        return solution(grid,p.first,p.second,0);
    }
};
```
