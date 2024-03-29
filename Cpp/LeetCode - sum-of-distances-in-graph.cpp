class Solution {
public:
    void solvable(map<int,vector<int>> a,vector<int>& dp,int k){
        map<int,bool> b;
        for(auto x:a[k]){
            if(dp[x]!=0){
                dp[k]=dp.size()+dp[x]-2*(a[k].size());
                return;
            }
        }
for(int i=0;i<dp.size();i++)b[i]=false;
for(auto x:a[k])b[x]=true;
b[k]=true;
        int h=0;
        for(auto x:b){
if(!x.second)
    h+=fetcher(a,dp,x.first,1,a[k]);else h+=1;}
  dp[k]=h-1;
    }
    int fetcher(map<int,vector<int>> a,vector<int>& dp,int key,int b,vector<int> c){
        if(b>=dp.size()-1)return dp.size()-1;
         int k=dp.size()-1;
        for(auto x:c){
            if(x==key) {
                return min(k,b);
            }
        }
            for(auto x:c) k=min(k,fetcher(a,dp,key,b+1,a[x]));
            return k;
    }
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<int> dp(n,0);
        map<int,vector<int>> a;
        for(auto x:edges){
            a[x[0]].push_back(x[1]);
            a[x[1]].push_back(x[0]);
        }
        for(int i=0;i<n;i++)solvable(a,dp,i);
        return dp;
    }
};
