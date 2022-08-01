class Solution {
public:
    int finder(vector<vector<int>>& a,int m, int n,int s, int g){
        if(s==m-1||g==n-1){
            return 1;
        }
        if(a[s][g]!=0) return a[s][g];
        a[s][g]=finder(a,m,n,s+1,g)+finder(a,m,n,s,g+1);
        return a[s][g];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> a(m,vector<int>(n,0));
        if(m==0&&n==0)return 0;
        return finder(a,m,n,0,0);
    }
};
