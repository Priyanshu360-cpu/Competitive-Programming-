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
