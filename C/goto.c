#include <stdio.h>
#define newline printf("\n");
int main(void) { 
 int n;
 scanf("%d",&n);
 int o;
 scanf("%d",&o);
 int a = 1;
 L:
 a=a*n;
 n=n-2;
 if(n>=3) goto L;
 printf("%d",a);
 newline
 int e;
    scanf("%d",&e);
    int w = e,t;
    P:
    t=w;
    K:
    printf("%d",t);
    t--;
    if(t>=1) goto K;
    newline
    w--;
    if(w>=1) goto P;
    
 int i = o,j;
 int r[o];
 for (int y=0;y<=o-1;y++){
     scanf("%d",&r[y]);
 } 
 //conditionalized array 
 for (int y=0;y<=o-1;y++){
     printf("%d",r[y]);
 } 
 newline
 int b[o];
 int u = 0;
 for(int y = n;y>=0;y++){
     b[y]=r[u];
     u++;
 } 
 //reverseing string
 for(i=o/2;i>=1;i--){
     b[i] = r[u];
     u--;
 } 
 for(i=u;i<=o;i++){
     b[i] = r[u];
     u++;
 } 
 // LastQuestion
 for(int x=0;x<=o;x++){
     int g = r[x]; 
     if(r[x+2]!=0){
     r[x]=r[x+2];
     r[x+2]=g;
     }
 }
 for(i=0;i<=o;i++){
     printf("%d",r[i]);
 } 
 newline
}
