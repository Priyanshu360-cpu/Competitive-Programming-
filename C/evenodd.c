#include <stdio.h>
void sol(int* a,int n,int *c){
    *c=*c+1;
    for(int i=0;i<n;i++){
         *c=*c+1;
         if(a[i]%2!=0)continue;
         else {
            int k=i;
            while(i<n){
                *c=*c+1;
                if(a[i]%2!=0){
                    int m=a[k];
                    a[k]=a[i];
                    a[i]=m;
                    break;
                }else i=i+1;
            }
            i=k;
        }
    }
} 
int main(void) {
int n;
scanf("%d",&n);
int a[n];
int c=3;
for(int i=0;i<n;i++){
    c=c+1;
    scanf("%d",&a[i]);
}
sol(a,n,&c);
for(int i=0;i<n;i++){
    c=c+1;
    printf("%d ",a[i]);
}
printf("\nTotal Steps - %d",c+1);
	return 0;
}
