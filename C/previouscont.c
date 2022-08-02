#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=2;i<n;i++){
        if(a[i]==a[i-1]){
            printf("%d ");
        }else if(a[i-1]<a[i]){
            int k=i;
            int s=0;
            i=i-1;
            while(i<n){
                if(s+a[i]==a[k]){
                    printf("%d ",a[k]);
                    break;
            }else if(s+a[i]<a[k]){
                s=s+a[i];
                i=i-1;
        }else break;
            }
     i=k;
    }
}
}
