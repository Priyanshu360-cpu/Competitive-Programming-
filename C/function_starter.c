#include <stdio.h>
float fact(int a){
    int k=1;
    float s=0.0;
    int z;
    while(k!=a){
        if(k%2==0){
            z=1;
            for(int i=k;i>0;i--){
                z=z*i;
            }
            s=s+z;
        }
        else{
            z=1;
            for(int i=k;i>0;i--){
                z=z*i;
            }
            
            s=s+(1.0/z);
        }
        k=k+1;
    }
    return s;
}
void ptrn(int a,char z){
   for(int i=0;i<a;i++){
       for(int j=0;j<a-i;j++){
           printf("%c",z);
       }
       printf("\n");
   }
}
int calc(int x,int y,char c){
    int z;
    switch(c){
        case '+':
         z=x+y;
         break;
        case '-':
         z=x-y;
         break;
        case '*':
         z=x*y;
         break;
        case '/':
         z=x/y;
         break;
        default:
         z=0;
    }
    return z;
}
void drive(int a,int b,char c){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%c",c);
        }
        printf("\n");
    }
}
int avg(int x,int y,int z){
    int c;
    c=(x+y+z)/3;
    return c;
}
int fibo(int n){
    if (n <= 1)
        return n;
    return fibo(n-1) + fibo(n-2);
}
int main(void) {
    char s[30];
    scanf("%[^\n]s",s);
    int k=0;
    char *p=s;
    while(s[k]!='\0'){
        k++;
    }
    printf("%d\n",k);
  int q=k;
  int v=q;
    while(k){
        for(int i=0;p[i]!='\0';i++){
            printf("%c",*(p+i));
        }
        p=p+1;
        printf("\n");
        k--;
    }
    p=&s[q];
    while(q+1){
        for(int i=0;&p[i]!=&s[-1];i--){
            printf("%c",*(p+i));
        }
        if(q==v){
            p=p-2;
        }
        else{
        p=p-1;
        }
        printf("\n");
        q--;
    }
    printf("%d\n",calc(2,3,'+'));
	printf("%f",fact(5));
	printf("\n");
	ptrn(3,'=');
	drive(2,3,'<');
	printf("\n");
	printf("%d",fibo(3));
	printf("\n");
	printf("%d",avg(2,3,4));
	return 0;
}
