#include <stdio.h>
void removedup(int *a,int n,int* t){
    int o=n-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                *t=*t+1;
                int l=a[n-1];
                a[n-1]=0;
                int h=a[j];
                for(int k=n-2;k>=j;k--){
                    a[k]=l;
                    l=k;
                }
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int* a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int t=0;
    removedup(a,n,&t);
    n=n-t+1;
    a=realloc(a,n*sizeof(int));
    for(int i=0;i<n;i++)printf("%d",a[i]);
}
