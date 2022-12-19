class Solution {
public:
    map<int,vector<int>> a;
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    for(auto x:edges){
        a[x[0]].push_back(x[1]);
        a[x[1]].push_back(x[0]);
    }
    map<int,bool> c;
    queue<int> b;
    b.push(source);
    while(!b.empty()){
        if(b.front()==destination)return true;
        if(c.find(b.front())!=c.end()){
            b.pop();
            continue;
        }
        c[b.front()]=true;
        for(auto x:a[b.front()])b.push(x);
        b.pop();
    }
    return false;   
    }
};
