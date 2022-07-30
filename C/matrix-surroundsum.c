#include <stdio.h>
    int surroundsum(int* a,int n,int z){
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
          if(*((a+i*n)+j)==z){
            int s=0;
            if(i-1>=0){
                 printf("%d\n",z);
                s=s+*(a+(i-1)*n+j);
            }
            if(i+1<n){
                s=s+*(a+(i+1)*n+j);
            }
            if(j-1>=0){
                s=s+*(a+i*n+j-1);
            }
            if(j+1<n){
                s=s+*(a+i*n+j+1);
            }
            return s;
          }
        }
    }
    }
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
    printf("%d",surroundsum(a,n,p));
    return 0;
}
