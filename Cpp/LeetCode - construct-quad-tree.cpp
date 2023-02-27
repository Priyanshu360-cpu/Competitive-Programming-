class Solution {
public:
Node* constructs(int n,int i,int j,vector<vector<int>>& grid){
    Node* quad=new Node(1,0);//mark it as non leaf
    int r=1;//flag to check for equality
       int p=grid[i][j];
    for(int k=i;k<i+n;k++){
        for(int v=j;v<j+n;v++){
            if(grid[k][v]!=p){
                r=0;
                break;
            }
        }
        if(!r)break;
    }
    if (r)//if it satisfies then the given node is leaf node arrange and return it.
      return new Node(grid[i][j], 1);
//keep the process go on recursively.
    quad->topLeft=constructs(n/2,i,j,grid);
    quad->bottomLeft=constructs(n/2,i+(n/2),j,grid);
    quad->topRight=constructs(n/2,i,j+(n/2),grid);
    quad->bottomRight=constructs(n/2,i+(n/2),j+(n/2),grid);
    return quad;
}
    Node* construct(vector<vector<int>>& grid) {
        return constructs(grid.size(),0,0,grid);
    }
};
