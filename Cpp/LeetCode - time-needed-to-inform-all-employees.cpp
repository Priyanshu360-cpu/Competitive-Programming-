class Solution {
public:
map<int,vector<int>> a;
int dfs(int i,vector<int>& informTime){
    if(a[i].size()==0)return 0;
    int k=0;
    for(int j=0;j<a[i].size();j++){
        k=max(dfs(a[i][j],informTime),k);
    }
    return k+informTime[i];
}
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
       for(int i=0;i<manager.size();i++){
           if(manager[i]==-1)continue;
           a[manager[i]].push_back(i);
       }
       return dfs(headID,informTime);
    }
};
