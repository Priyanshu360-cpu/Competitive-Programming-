#include <stdio.h>
void maxconsecutive(int *a,int n){
            int p=0;
    for(int i=0;i<n;i++){
        int z=0;
        while(a[i]=a[i+1]&&i+1<n){
            z++;
            i++;
        }
        if(i+1==n){
            if(a[i]==a[i-1]){
                z++;
            }
        }
        p=p>z?p:z;
    }
    printf("%d",p);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     maxconsecutive(a,n);
}
