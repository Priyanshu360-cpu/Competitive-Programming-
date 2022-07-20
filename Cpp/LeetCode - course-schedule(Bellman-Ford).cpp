class Solution {
public:
    void dfs(vector<int> b,vector<bool>& s,vector<int> a[],int i,int V){
        if(i>=V){
           s.push_back(true);
            return;
        }
      for(auto x: a[i]){
          vector<int>::iterator it;
          it=find(b.begin(),b.end(),x);
          if(it!=b.end()) s.push_back(false);
          else{
              for(auto g:b) cout<<g<<endl;
              b.push_back(x);
              dfs(b,s,a,x,V);
              b.pop_back();
          }
      }
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        if(prerequisites.size()==0) return true;
        vector<int> a[numCourses];
        for(int i=0;i<prerequisites.size();i++){
            for(int j=1;j<prerequisites[i].size();j++)a[prerequisites[i][0]].push_back(prerequisites[i][j]);
        }
        int p;
        for(int i=0;i<numCourses;i++){
            if(a[i].size()!=0){
                p=i;
                break;
            }
        }
        vector<int> b;
        vector<bool> s;
        dfs(b,s,a,p,numCourses);         
     for(auto x:s) if(x) return true;
        return false;
    }
};
