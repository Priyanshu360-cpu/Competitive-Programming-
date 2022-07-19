class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        if(prerequisites.size()==0) return true;
        vector<int> a[numCourses];
        for(int i=0;i<prerequisites.size();i++)
            for(int j=1;j<prerequisites[i].size();j++)a[prerequisites[i][0]].push_back(prerequisites[i][j]);
        int p;
        for(int i=0;i<numCourses;i++)if(a[i].size()!=0){p=i;
        queue<int> b;
        vector<int>::iterator it;
        vector<int> c;
        b.push(p);
        while(!b.empty()){
            c.push_back(b.front());
            for(auto x:a[b.front()]){
                it=find(c.begin(),c.end(),x);
                if(it!=c.end()&&x<=b.front()){
                    cout<<x<<b.front();
                    return false;}
                else{
                    b.push(x);
                }
            }
            b.pop();
        }
                                                       }
        return true;
    }
};
