class Solution {
public:
    void dfs(vector<vector<int>> heights,int i,int j,int* g,int* f,map<pair<int,int>,int>& a,map<pair<int,int>,int>& b){
        if(*g==1&&*f==1)return;
        if(i==0)*g=1;
        if(j==heights[0].size()-1)*f=1;
        if(i<0||j<0)return;
        if(a[pair(i,j)]==1){
            *g=1;
            *f=1;
            return;
        }
        b[pair(i,j)]+=1;
        if(b[pair(i,j)]>1)return;
        if(i>0&&heights[i-1][j]<=heights[i][j])dfs(heights,i-1,j,g,f,a,b);
        if(j>0&&heights[i][j-1]<=heights[i][j])dfs(heights,i,j-1,g,f,a,b);
        if(i<=heights.size()-2&&heights[i+1][j]<=heights[i][j])dfs(heights,i+1,j,g,f,a,b);
        if(j<=heights[0].size()-2&&heights[i][j+1]<=heights[i][j])
            dfs(heights,i,j+1,g,f,a,b);
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        map<pair<int,int>,int> a;
        vector<vector<int>> q;
        a[pair(0,heights[0].size()-1)]=1;
        a[pair(heights.size()-1,0)]=1;
        for(int i=0;i<heights.size();i++){
            for(int j=0;j<heights[0].size();j++){
                map<pair<int,int>,int> b;
                int o=0;
                if(i>0&&a[pair(i-1,j)]==1&&heights[i-1][j]<=heights[i][j])o=1;
                else if(j>0&&a[pair(i,j-1)]==1&&heights[i][j-1]<=heights[i][j])o=1;
                else if(i<heights.size()-1&&a[pair(i+1,j)]==1&&heights[i+1][j]<=heights[i][j])o=1;
                else if(j<heights[0].size()-1&&a[pair(i,j+1)]==1&&heights[i][j+1]<=heights[i][j])o=1;
                int g=0;
                int f=0;
                if(o==0)
                 dfs(heights,i,j,&g,&f,a,b);
                if((g==1&&f==1)||o==1){
                    a[pair(i,j)]=1;
                    vector<int> c;
                    c.push_back(i);
                    c.push_back(j);
                    q.push_back(c);
                }
            }
        }
        return q;
    }
};
