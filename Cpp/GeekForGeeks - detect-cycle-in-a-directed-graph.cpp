#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int> a; 
        vector<int>::iterator it; 
        for(int i=0;i<V;i++){
      for(auto x:adj[i]){
          if(x==i+1) { 
              return true;
          }
          it=find(a.begin(),a.end(),x);
          if(it!=a.end()){ 
              return true;
          }
          else a.push_back(x);
      } }
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

