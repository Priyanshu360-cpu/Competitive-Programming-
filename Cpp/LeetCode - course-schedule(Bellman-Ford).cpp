class Solution {
public:
    void dfs(vector<int> b,vector<bool>& s,vector<int> a[],int i,int j,int V,int* p){
        if(*p==1) return;
        if(a[i].size()==0) return;
        if(j>=V){
           s.push_back(true);
            return;
        }
      for(auto x: a[i]){
          vector<int>::iterator it;
          it=find(b.begin(),b.end(),x);
          if(it!=b.end()){
              *p=1;
              s.push_back(false);
              return;}
          else{
              b.push_back(x);
              if(a[x].size()!=0)
              dfs(b,s,a,x,j+1,V,p);
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
        int p=0;
        vector<bool> s;
     for(int i=0;i<prerequisites.size();i++){
         if(p==1) break;
            vector<int> b;
            b.push_back(prerequisites[i][0]);
            dfs(b,s,a,prerequisites[i][0],i,numCourses,&p);    
        }
    if(s.size()&&s[s.size()-1]==false) return false;
        return true;
    }
};
