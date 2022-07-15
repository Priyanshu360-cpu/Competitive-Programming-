class Solution {
public:
    void calc(vector<vector<int>>& a,vector<int>& h,int j,int i,int k,int m,int* p){
 a[i][j]=0;
  h.push_back((i*10)+j);
        *p=*p+1;
        if(i+1<m)
            if(a[i+1][j]==1) calc(a,h,j,i+1,k,m,p);
        if(j+1<k)
            if(a[i][j+1]==1) calc(a,h,j+1,i,k,m,p);
                if(i-1>=0)
            if(a[i-1][j]==1) calc(a,h,j,i-1,k,m,p);
                 if(j-1>=0)
            if(a[i][j-1]==1) calc(a,h,j-1,i,k,m,p);
        
    }
 
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<vector<int>> a=grid;
        vector<int> b;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[i].size();j++){
                vector<int> h;
                int p=0;
                if(a[i][j]==1){
                    p=p+1;
 a[i][j]=0;
                    if(j+1<a[i].size()&&a[i][j+1]==1)
                        calc(a,h,j+1,i,a[i].size(),a.size(),&p);
                    if(i+1<a.size()&&a[i+1][j]==1)
                        calc(a,h,j,i+1,a[i].size(),a.size(),&p);
                    
                    if(i-1>=0)
            if(a[i-1][j]==1) calc(a,h,j,i-1,a[i].size(),a.size(),&p);
        
                 if(j-1>=0)
            if(a[i][j-1]==1) calc(a,h,j-1,i,a[i].size(),a.size(),&p);
        
                }
                b.push_back(p);
            }
        }
        sort(b.begin(),b.end());
        return (b[b.size()-1]);
    }
};
