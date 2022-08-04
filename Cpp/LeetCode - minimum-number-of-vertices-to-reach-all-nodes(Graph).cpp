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
        traverse(a[l],b,a);
        b[l]=false;
        c.push_back(l);
        for(auto x:b){
            if(x==true)solution(n,a,b,c);
        }
    }
    void traverse(vector<int>& c,vector<bool>& b,map<int,vector<int>>& a){
        for(auto x:c){
            if(b[x]==true){
                b[x]=false;
                if(a.find(x)!=a.end()){
                traverse(a[x],b,a);}
            }
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
   L:
            int z=a[i].size();
        for(auto c:a[i]){
            if(a.find(c)!=a.end()&&b[c]!=false){
                b[c]=false;
                for(auto y:a[c]){
                    a[i].push_back(y);
                }
            }
        }
            if(a[i].size()!=z)goto L;
            
      }
        }
        vector<int> c;
        vector<int>::iterator it;
        solution(n,a,b,c);
       
        return c;
        
    }
};
