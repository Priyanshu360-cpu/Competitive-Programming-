class Solution {
public:
map<int,vector<int>> a;
int dfs(int i,map<int,vector<int>>& a,vector<bool>&visited,int level,vector<int>&dp){
    if(visited[i])return 0;
    visited[i]=true;
    int sum=0;
    for(auto x:a[i]){
        sum=sum+dfs(x,a,visited,level+1,dp);
    }
    return dp[i]=level+sum;
}
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges){
    vector<int> ans(n,0);
    vector<int>dp(n,0);
    for(auto x:edges){
        a[x[0]].push_back(x[1]);
        a[x[1]].push_back(x[0]);
    }
    for(int i=0;i<n;i++){
        vector<bool> visited(n,false);
        ans[i]=dfs(i,a,visited,0,dp);
    }
    return ans;
    }
};
