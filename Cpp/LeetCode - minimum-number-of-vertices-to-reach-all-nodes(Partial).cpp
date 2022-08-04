class Solution {
public:
    void solution(){
        l=0;
        for(int i=0;i<n;i++){
            if(a[i]>max&&b[i]==true){
                max=a[i];
                l=i;
            }
        }
        traverse()
        b[i]=false;
        for(auto x:b){
            if(x==true)solution()
        }
    }
    void traverse(){
        for(auto x:c){
            if(b[x]==true){
                b[x]=false;
                if(a.find(x)!=a.end(){
                traverse(a[x])}
            }
        }
    }
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
       map<int,vector<int>> a;
        vector<bool> b(n,true);
        for(int i=0;i<edges.size();i++){
            a[edges[i][0]].push_back(edges[i][1]);
        }
        soltuion()
        return edges[0];
        
    }
};
