class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
       map<int,vector<int>> a;
        vector<bool> b(n,true);
        for(int i=0;i<edges.size();i++){
            a[edges[i][0]].push_back(edges[i][1]);
        }
        for(int i=0;i<n;i++){
            if(a.find(i)!=a.end()){
                vector<bool> m(n,true);
                queue<int> p;
                p.push(i);
                while(!p.empty()){
                    if(a.find(p.front())!=a.end()&&m[p.front()]==true){
                       m[p.front()]=false;
                        if(p.front()!=i){
                            b[p.front()]=false;
                        }
                        int q=p.front();
                        p.pop();
                       for(auto x:a[q]){
                           p.push(x);
                           vector<int>::iterator it;
                           it=find(a[i].begin(),a[i].end(),x);
                           if(it==a[i].end()){
                               a[i].push_back(x);
                           }
                       }if(q!=i){
                           a.erase(q);
                       }
                    }else{
                        m[p.front()]=false;
                        p.pop();
                    }
                }
            }
        }
         vector<int> c;
        for (auto i : a){
            c.push_back(i.first);
        }
        return c;
        
    }
};
