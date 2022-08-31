// Brute Force Approach with PAIR mapping dp(TLE)

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
                    q.push_back({i,j});
                }
            }
        }
        return q;
    }
};

// Dp with boolean mapping (TLE)

class Solution {
public:
    bool dfs(vector<vector<int>> heights,int i,int j,map<pair<int,int>,bool>& a,map<pair<int,int>,int>& b){
if(i<0||j<0||i==heights.size()||j==heights[0].size()||b[pair(i,j)]>1)return false;
        if(a[pair(i,j)])return true;
        b[pair(i,j)]+=1;
        bool check=false;
        if(i>0&&heights[i-1][j]<=heights[i][j])check=check||dfs(heights,i-1,j,a,b);
        if(j>0&&heights[i][j-1]<=heights[i][j])check=check||dfs(heights,i,j-1,a,b);
        if(i<=heights.size()-2&&heights[i+1][j]<=heights[i][j])check=check||dfs(heights,i+1,j,a,b);
        if(j<=heights[0].size()-2&&heights[i][j+1]<=heights[i][j])
            check=check||dfs(heights,i,j+1,a,b);
        a[pair(i,j)]=check;
        return check;
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        map<pair<int,int>,bool> a;
                map<pair<int,int>,bool> w;
                for (int i=0; i<heights.size(); i++){
            a[pair(i,0)]=true;
            w[pair(i,heights[0].size()-1)]=true;
        }
        for (int i=0; i<heights[0].size(); i++){
            a[pair(0,i)]=true;
            w[pair(heights.size()-1,i)]=true;
        }
        vector<vector<int>> q;
        for(int i=0;i<heights.size();i++){
            for(int j=0;j<heights[0].size();j++){
                map<pair<int,int>,int> b;
                if(dfs(heights,i,j,a,b)&&dfs(heights,i,j,w,b)){
                    q.push_back({i,j});
                }
            }
        }
        return q;
    }
};

//DP With Boolean Vectors to remove mapping time(TLE)

class Solution {
public:
    int vertical;
    int horizontal;
    bool dfs(vector<vector<int>>& heights,int i,int j,vector<vector<bool>>& a,vector<vector<bool>>& b){
if(i<0||j<0||i==vertical||j==horizontal||b[i][j]==true)return false;
        if(a[i][j])return true;
        int l=heights[i][j];
       b[i][j]=true;
        bool check=false;
        if(i>0&&heights[i-1][j]<=heights[i][j])check=check||dfs(heights,i-1,j,a,b);
        if(j>0&&heights[i][j-1]<=heights[i][j])check=check||dfs(heights,i,j-1,a,b);
        if(i<=vertical-2&&heights[i+1][j]<=heights[i][j])check=check||dfs(heights,i+1,j,a,b);
        if(j<=horizontal-2&&heights[i][j+1]<=heights[i][j])
            check=check||dfs(heights,i,j+1,a,b);
        a[i][j]=check;
        heights[i][j]=l;
        return check;
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vertical=heights.size();
        horizontal=heights[0].size();
        vector<vector<bool>> a(vertical,vector<bool>(horizontal,false));
        vector<vector<bool>> w(vertical,vector<bool>(horizontal,false));
                for (int i=0; i<vertical; i++){
            a[i][0]=true;
            w[i][horizontal-1]=true;
        }
        for (int i=0; i<horizontal; i++){
            a[0][i]=true;
            w[vertical-1][i]=true;
        }
        vector<vector<int>> q;
        for(int i=0;i<vertical;i++){
            for(int j=0;j<horizontal;j++){
                vector<vector<bool>> b(vertical,vector<bool>(horizontal,false));
                bool k = dfs(heights,i,j,a,b);
                vector<vector<bool>> z(heights.size(),vector<bool>(horizontal,false));
                if(k&&dfs(heights,i,j,w,z)){
                    q.push_back({i,j});
                }
            }
        }
        return q;
    }
}; 

//DP with single vector and changing its own data (Accepted Solution)

class Solution {
public:
    int vertical;
    int horizontal;
    int dfs(vector<vector<int>>& heights,int i,int j,vector<vector<int>>& a){
if(i<0||j<0||i==vertical||j==horizontal||heights[i][j]==INT_MAX)return 0;
        if(a[i][j])return 1;
        int l=heights[i][j];
        heights[i][j]=INT_MAX;
        int check=0;
        if(i>0&&heights[i-1][j]<=l)check=check||dfs(heights,i-1,j,a);
        if(j>0&&heights[i][j-1]<=l)check=check||dfs(heights,i,j-1,a);
        if(i<=vertical-2&&heights[i+1][j]<=l)check=check||dfs(heights,i+1,j,a);
        if(j<=horizontal-2&&heights[i][j+1]<=l)
            check=check||dfs(heights,i,j+1,a);
        a[i][j]=check;
        heights[i][j]=l;
        return check;
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vertical=heights.size();
        horizontal=heights[0].size();
        vector<vector<int>> a(vertical,vector<int>(horizontal,0));
        vector<vector<int>> w(vertical,vector<int>(horizontal,0));
        for (int i=0; i<vertical; i++){
            a[i][0]=1;
            w[i][horizontal-1]=1;
        }
        for (int i=0; i<horizontal; i++){
            a[0][i]=1;
            w[vertical-1][i]=1;
        }
        vector<vector<int>> q;
        for(int i=0;i<vertical;i++){
            for(int j=0;j<horizontal;j++){
                if(dfs(heights,i,j,a)&&dfs(heights,i,j,w)){
                    q.push_back({i,j});
                }
            }
        }
        return q;
    }
};
