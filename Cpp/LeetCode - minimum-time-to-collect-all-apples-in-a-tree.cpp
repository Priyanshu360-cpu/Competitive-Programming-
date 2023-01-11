class Solution {
public:
map<int,vector<int>> a;
int solute(vector<bool>& hasApple,vector<int>& visited,int i){
    if(visited[i]==1)return 0;
    visited[i]=1;
    if(!hasApple[i])return 0;
    int p=2;
    for(auto x:a[i]){
        p+=solute(hasApple,visited,x);
    }
    return p;
}
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        sort(edges.begin(),edges.end(),greater<>());
        for(auto x:edges){
            if(hasApple[x[1]])hasApple[x[0]]=true;
            a[x[0]].push_back(x[1]);
        }
        vector<int> visited(n,-1);
        int s=solute(hasApple,visited,0);
        int c=0;
       for(int i=0;i<n;i++)if(visited[i]==-1){
           int o=solute(hasApple,visited,i);
           if(o!=0){
               if(c==0)s+=2;
           s+=o;
           s+=i*2;
           }

       }
        return s==0?0:s-2;
    }
};
