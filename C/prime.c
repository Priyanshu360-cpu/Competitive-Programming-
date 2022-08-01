#include <stdio.h>
void isprime(int n,int* c){
    for(int i=2;i<=n/2;i++){
        *c=*c+1;
        if(n%i==0){
            printf("%d is not prime\n",n);
            return;
        }
    }
    printf("%d is prime\n",n);
    *c=*c+1;
}
void isprime2(int n,int* c){
    for(int i=2;i<n;i++){
        *c=*c+1;
        if(n%i==0){
            printf("%d is not prime\n",n);
            return;
        }
    }
    printf("%d is prime\n",n);
    *c=*c+1;
}
void isprime3(int n,int*c){
    if(n==0||n==1||(n%2==0&&n>2)){
        printf("%d is not prime\n",n);
        return;
    }
    *c=*c+1;
    for(int i=3;i<=n/2;i+=2){
        *c=*c+1;
        if(n%i==0){
            printf("%d is not prime\n",n);
            return;
        }
    }
    printf("%d is prime\n",n);
}
int main(){
    int n;
    int c=1;
    int d=1;
    int e=1;
    scanf("%d",&n);
    isprime(n,&c);
    isprime2(n,&d);
    isprime3(n,&e);
    printf("Total Steps - %d\n",c+1);
    printf("Total Steps - %d\n",d+1);
    printf("Total Steps - %d\n",e+1);
    return 0;
}
