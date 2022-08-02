#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    int p=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=p;
            p=p+1;
}
    }
    int t;
    scanf("%d",&t);
int s=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==t){
                if(i-1>=0){
if(j+1<n) s=s+a[i-1][j+1];
if(j-1>=0) s=s+a[i-1][j-1];
                     s=s+a[i-1][j];
                }
                if(i+1<n){
                     s=s+a[i+1][j];
if(j+1<n) s=s+a[i+1][j+1];
if(j-1>=0) s=s+a[i+1][j-1];
                }
    if(j-1>=0){
                     s=s+a[i][j-1];
                }
                if(j+1<n){
                    s=s+a[i][j+1];
                }

            }
        }
    }
    printf("%d\n",s);
                return 0;
    return 0;
}
