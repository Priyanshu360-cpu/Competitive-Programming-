#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int>::iterator it;
        vector<int> a;
        for(int i=0;i<V;i++){
             if(i!=0){
                 if(adj[i-1].size()!=0){
                     if(adj[i].size()==0) return true;
                 }
             }
            for(auto x:adj[i]){
                it=find(a.begin(),a.end(),x);
               
                if(it!=a.end()||i==x){ 
                    return true;} 
                else {
                    a.push_back(x);
                }
            } 
        } 
        return false;
        }
};


int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

