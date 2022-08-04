class Solution {
public:

    void solution(int n,map<int,vector<int>>& a,vector<bool>& b,vector<int>& c){
        int l=0;
        int max=0;
        for(int i=0;i<n;i++){
            if(a[i].size()>max&&b[i]==true){
                max=a[i].size();
                l=i;
            }
        }
        for(auto x:a[l]){
            b[x]=false;
        }
        b[l]=false;
        c.push_back(l);
        for(auto x:b){
            if(x==true)solution(n,a,b,c);
        }
    }
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
                       }
                    }else{
                        m[p.front()]=false;
                        p.pop();
                    }
                }
            }
        }
        
        vector<int> c;
        solution(n,a,b,c);
        return c;
        
    }
};
