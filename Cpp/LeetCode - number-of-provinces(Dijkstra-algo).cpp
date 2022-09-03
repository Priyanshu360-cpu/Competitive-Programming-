class Solution {
public:
    int findCircleNum(vector<vector<int>>& c) {
    vector<bool> bfs(c.size(),false);
        int s=0;
        queue<int> q;
        for(int i=0;i<c.size();i++){
            if(bfs[i]==false)
              q.push(i);
            else continue;
        while(!q.empty()){
            if(bfs[q.front()]==false)s+=1;
            bfs[q.front()]=true;
            for(int j=0;j<c[q.front()].size();j++){
                if(j==q.front())continue;
                if(c[q.front()][j]==1&&bfs[j]==false){
                    bfs[j]=true;
                    q.push(j);
                }
              }
             q.pop();
           }
        }
    return s;
    }
};
