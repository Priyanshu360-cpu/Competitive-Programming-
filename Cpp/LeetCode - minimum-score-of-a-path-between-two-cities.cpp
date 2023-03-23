class Solution {
public:
        map<int,vector<pair<int,int>>> a;
        int global_min=INT_MAX;
    void find(vector<bool>& visited,int pos,int &n){
        if(visited[pos])  return;
        visited[pos]=true;
        for(auto x:a[pos]){
        find(visited,x.first,n);
        global_min=min(global_min,x.second);
        }
    }
    int minScore(int n, vector<vector<int>>& roads) {
        for(auto x:roads){
            a[x[0]].push_back({x[1],x[2]});
            a[x[1]].push_back({x[0],x[2]});
        }
        vector<bool> visited(n+1,false);
        find(visited,1,n);
        return global_min;
    }
};
