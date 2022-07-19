class Solution {
public:
    void finale(vector<vector<int>>& a,int g,int p){
        if(p==g) return;
        vector<int> b;
        b.push_back(1);
        for(int i=0;i<a[a.size()-1].size()-1;i++) b.push_back(a[a.size()-1][i]+a[a.size()-1][i+1]);
        b.push_back(1);
        a.push_back(b);
        finale(a,g,p+1);
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a;
        if(numRows==0)return a;
        vector<int> b;
        b.push_back(1);
        a.push_back(b);
        if(numRows==1) return a;
        finale(a,numRows,1);
        return a;
    }
};
