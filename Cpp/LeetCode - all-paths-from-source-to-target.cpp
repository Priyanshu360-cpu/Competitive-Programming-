class Solution {
public:
vector<vector<int>> c;
int n;
void solution(vector<int> d,int g,vector<vector<int>>& graph){
    if(g==n){d.push_back(g);c.push_back(d);return;}
    d.push_back(g);
    for(auto x:graph[g]){
        solution(d,x,graph);
    }
}
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph){
        vector<int> f;
        n=graph.size()-1;
        solution(f,0,graph);
        return c;
    }
};
