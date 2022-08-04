class Solution {
public:
    void solution(){
        for(int i=0;i<n;i++){
            if(a[i]>max&&b[i]==true){
                for(auto x:a[i]){
                    traverse();
                }
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
