class Solution {
public:
    map<int,bool> c;
    vector<int> s;
    map<int,int> visited;
    bool solution(int i,map<int,vector<int>>& a){
        if(visited[i]==1)return false;
        for(auto x:a[i]){
            if(a.find(x)==a.end()){
                return true;
            }else{
                visited[i]=1;
                c[i]=false||(solution(x,a));
                visited[i]=0;
            }
        }
        return c[i];
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        map<int,int> d;
        map<int,vector<int>> a;
        for(int i=0;i<graph.size();i++){
            if(graph[i].size()==0){
                d[i]=1;
            }
            else{
                a[i]=graph[i];
            }
        }
        for(auto x:a){
            solution(x.first,a);
        }
        for(auto x:c){
            cout<<x.first<<endl;
        }
        return s;
    }
};
