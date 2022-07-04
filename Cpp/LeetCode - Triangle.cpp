class Solution {
public:
    
    vector<int> count;
    void in(vector<vector<int>>& triangle,int i,int c,int p){
        if(i+1<triangle.size()){
            in(triangle,i+1,c+triangle[i+1][p],p);
            in(triangle,i+1,c+triangle[i+1][p+1],p+1);
        }
        else{
            count.push_back(c);
        }
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> g=triangle;
        for(int i=0;i<g.size();i++) sort(g[i].begin(),g[i].end());
        int c=g[0][0];
        int d=1;
        for(int i=0;i<g.size();i++) if(g[i][0]!=c) d=0;
        if (d==1) return c;
        in(triangle,0,triangle[0][0],0);
        sort(count.begin(),count.end());
        return count[0];
    }
};
