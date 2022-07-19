#include <bits/stdc++.h>
using namespace std;
 bool isCyclic(int V, vector<int> adj[]) {
        vector<int> b;
        vector<int>::iterator it;
       queue<int> a;
       int p;
       for(int i=0;i<V;i++){
           if(adj[i].size()!=0){
               p=i;
               break;
           }
       }
       a.push(p);
      
       while(!a.empty()){
            b.push_back(a.front());
           if(adj[a.front()].size()==0){
               a.pop();
               continue;
           }
           for(auto x:adj[a.front()]){
               it=find(b.begin(),b.end(),x);
               if(it!=b.end()&&x<=a.front()){ 
                   return true;
               }
               else{
                   a.push(x);
               }
             
           }
            a.pop();
       }
        return false;
        }
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

