#include <stdio.h>
void removedup(int *a,int n,int *p){
    int i=0;
    int j=0;
    while(i<n){
        if(a[i]!=a[i+1]){
            a[j]=a[i];
            j++;
        }
        i++;
    }
    *p=j;
}
int main(){
    int n;
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int p=0;
    removedup(a,n,&p);
   n=p;
   a=(int*)realloc(a,n*sizeof(int));
    for(int i=0;i<n;i++)printf("%d",a[i]);
}
