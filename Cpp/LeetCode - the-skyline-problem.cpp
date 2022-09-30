class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
       vector<vector<int>> a;
       map<int,vector<int>> b;
       for(auto x:buildings){
           for(int i=x[0];i<x[1];i++){
               b[i].push_back(x[2]);
               sort(b[i].begin(),b[i].end());
           }
           b[x[1]].push_back(0);
       }
        int l=0;
      for(int i=buildings[0][0];i<=buildings[buildings.size()-1][1];i++){
          if(b[i].size()){
          int p=b[i][b[i].size()-1];
          if(p>l||p<l){
              a.push_back({i,p});
              l=p;
          }
          }
      }
        return a;
    }
};
