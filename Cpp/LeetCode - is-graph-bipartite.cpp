class Solution {
public:
map<int,vector<int>> a;
    bool isBipartite(vector<vector<int>>& graph) {
        for(int i=0;i<graph.size();i++){
            for(auto x:graph[i]){
                a[i].push_back(x);
                a[x].push_back(i);
            }
        }
        vector<int> color(graph.size(),-1);
        queue<int> b;
        color[0]=1;
        b.push(0);
        R:
        while(!b.empty()){
            for(auto x:a[b.front()]){
                if(color[x]==-1){
                    color[x]=color[b.front()]==0?1:0;
                    b.push(x);
                }else if(color[x]==color[b.front()]){
                    return false;
                }
            }
            b.pop();
        }
        for(int i=0;i<graph.size();i++){
            if(color[i]==-1&&a.find(i)!=a.end()){
                color[i]=1;
                b.push(i);
                goto R;
            }
        }
        return true;
    }
};
