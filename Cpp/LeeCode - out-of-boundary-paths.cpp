class Solution {
public:
    
    void solve(int m,int n,int sr,int sc,int *p,int g){
        if(*p==2147483647){
            return ;
        }
            if(sr<0&&sc>=0){
                if(g==0)*p=*p+1;
                else return;
            }
            if(sc<0&&sr>=0){
                if(g==0)*p=*p+1;
                else return;
            }
            if(sr==m&&sc<n){
                if(g==0)*p=*p+1;
                else return;
            }
          if(sr<m&&sc==n){
                if(g==0) *p=*p+1;
                else return;
            }
        if(g!=0){
        if(sr<m&&sc<n){
            solve(m,n,sr+1,sc,p,g-1);
            solve(m,n,sr,sc+1,p,g-1);
            solve(m,n,sr-1,sc,p,g-1);
            solve(m,n,sr,sc-1,p,g-1);
        }
        }
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
         int p=0;
         int h=1;

        while(h<=maxMove){
            solve(m,n,startRow,startColumn,&p,h);
            h=h+1;
        }
        return p%1000000007;
        
    }
};
