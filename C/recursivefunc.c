#include <stdio.h>
void disp(int n){
    if(n==0) return;
printf("%d\n",n%10);
n=n/10;
disp(n);
}
int gcd(int a,int b){
    if(b%a==0) return a;
    int g=a;
    a=b%a;
    b=g;
    return gcd(a,b);
} 
int nat(int n){
    if(n==1)
    return 1;
    printf("%d ",n);
    return nat(n-1);
}

void dob(int n){
    if(n==0)
    return;
printf("%d ",n);
dob(n-2);
}
int sum(int n){
    if(n==1)
    return 1;
return n+sum(n-1);
}
void rever(char *p){
    if(*p=='\0') return;
    rever(p+1);
    printf("%c ",*p);
}
void series(char *p,int n){
     char *g=p;
     if(n==0) return ;
    while(*p!='\0'){
        printf("%c ",*p);
        p++;
    }
    printf("\n");
    g=g+1;
    p=g;
    series(p,n-1);
}
int main(void) {
    char p[10];
    scanf("%s",p);
	int n=4567;
	disp(n);
	int h=gcd(24,33);
	printf("Gcd - %d\n",h);
	nat(10);
	printf("\n");
	dob(10);
	printf("\n");
	int s=sum(10);
	printf("%d\n",s);
	rever(p);
	printf("\n");
	series(p,4);
	return 0;
}
