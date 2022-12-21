// Working Code Color Algorithm
class Solution {
public:
map<int,vector<int>> a; // The graph
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int> color(n+1,-1);
        for(auto x:dislikes){
            a[x[0]].push_back(x[1]);
            a[x[1]].push_back(x[0]);
        }// Connecting the Graph
        color[1]=1;
        queue<int> b;
        b.push(1);
        R://a goto loop to visit unconnected nodes
        while(!b.empty()){
            for(auto x:a[b.front()]){
                if(color[x]==-1){
                    color[x]=color[b.front()]==0?1:0;
                    b.push(x);//coloring the nodes
                }else if(color[x]==color[b.front()]){
                    return false;//similar neighbor returns false
                }
            }
            b.pop();
        }
        for(int i=1;i<=n;i++){
            if(color[i]==-1&&a.find(i)!=a.end()){//find if node exists 
                color[i]=1;
                b.push(i);
                goto R;//visiting unconnected nodes;
            }
        }
        return true;
    }
};
// Raw Code
class Solution {
public:
map<int,vector<int>> a;
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        map<int,int> c;
        map<int,int> b;
        for(auto x:dislikes){
            a[x[0]].push_back(x[1]);
            a[x[1]].push_back(x[0]);
        }
        for(int i=1;i<=n;i++){
            int j=0;
            for(auto x:a[i]){
                    if(b.find(x)!=b.end()){
                        j=1;
                        break;
                    }
            }
            if(j==0)b[i]=1;
            if(j==1){
                for(auto x:a[i]){
                    if(c.find(x)!=c.end()){
                        cout<<i<<x;
                        return false;
                    }
                }
            c[i]=1;
        }
    }
        return true;
    }
};
