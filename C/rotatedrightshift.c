#include <stdio.h>
void rotate(int *a,int b,int c,int n,int s){
    for(int i=0;i<s;i++){
         printf("%d\n",b);
         int l=a[c];
         int h=a[b];
        for(int j=b;j<c;j++){
             int k=a[j+1];
            a[j+1]=h;
            h=k;
        }
        a[b]=l;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int c,b;
    int s;
    scanf("%d",&c);
    scanf("%d",&b);
    scanf("%d",&s);
    rotate(a,c,b,n,s);
    for(int i=0;i<n;i++)printf("%d",a[i]);
}
