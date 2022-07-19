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
    //question2 starts here
     void finale2(vector<int>& a,int g,int p){
        if(p==g) return;
        vector<int> b;
        b.push_back(1);
        for(int i=0;i<a.size()-1;i++) b.push_back(a[i]+a[i+1]);
        b.push_back(1);
        a=b;
        finale2(a,g,p+1);
    }
    vector<int> getRow(int rowIndex) {
        vector<int> a;
        a.push_back(1);
        if(rowIndex+1==1) return a;
        finale2(a,rowIndex+1,1);
        return a;
    }
};
