class Solution {
public:
        map<int,bool> b;
        map<int,vector<int>> a;
    int connect(){
        int i=0;
        for(auto x:a){
            if(b[x.first]==true)continue;
            cout<<x.first;
            i+=1;
            traverse(x.first);
        }
        return i;
    }
    void traverse(int q){
        if(b[q]==true) return;
        b[q]=true;
        for(auto x:a[q])traverse(x);
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()+1<n) return -1;
        for(int i=0;i<n;i++){
          b[i]=false;
        }
      for(auto x:connections){
          a[x[0]].push_back(x[1]);
          a[x[1]].push_back(x[0]);
      }
        int j=connect();
        for(auto x:b){
            if(x.second==false)j+=1;
        }
        return j-1;
    }
};
