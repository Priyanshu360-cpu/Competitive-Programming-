class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        map<int,pair<int,vector<int>>> a;
        for(auto x:employees){
            a[x->id]=pair(x->importance,x->subordinates);
        }
        vector<int> b(a.rbegin()->first+1,0);
        int i=0;
        queue<int> c;
        c.push(id);
        while(!c.empty()){
            if(b[c.front()]==1){
                c.pop();
                continue;
            }
            b[c.front()]=1;
            i+=a[c.front()].first;
            for(auto x:a[c.front()].second){
                if(b[x]==1)continue;
                else c.push(x);
            }
            c.pop();
        }
        return i;
    }
};
