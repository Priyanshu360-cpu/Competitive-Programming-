#include <stdio.h>

int main(void) {
      int a, b, c, n;
      int p,m,k,l,y;
   scanf("%d",&n);
   scanf("%d",&p);
   scanf("%d",&m);
   scanf("%d",&k);
   scanf("%d",&l);
   scanf("%d",&y);
   int s=p,q=m,r=0;
   float w = 0;
   a = b = 1;
   printf("%d %d ",a,b);
   for(int i = 1; i <= n-2; i++) {
      c = a + b;
      printf("%d ", c);
      a = b;
      b = c;
   }
   printf("\n");
   for(int i = p;i>0;i--){
       printf("%d",p);
       p=p-1;
   }
   printf("\n");
   for(int i=(s>m?s:m);i>=(s>m?m:s);i--){
       printf("%d",i);
   }
   int o = k;
   printf("\n");
   for(int i=1;i<=k;i++){
       printf("%d%d",i,o);
       o=o-1;
   }
   printf("\n");
   float i;
   for( i = 1.0;i<=l-2;i++){
      w=w+(i/(i+2));
      i=i+4;
   }
   printf("%f",w);
   printf("\n");
 for(i=y;i>0;){
     i=i/10;
     r=r+1;
 }
 r=r+1;
 if(r%2==0){
     r=r/2;
     
     int f=1;
    for(;r;r--){
         f=f*10;
     }
     printf("%d%d",y%f,y%(f*10));
 }
 else{
     r=(r/2)+1;
     for(;r;r--){
         f=f*10;
     }
     printf("%d",y%f;
 }
   return 0; 
}
