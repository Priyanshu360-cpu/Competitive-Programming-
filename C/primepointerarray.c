#include <stdio.h>
int* prime(int x,int y,int *m){
    static int l=0;
    for(int i=x;i<y;i++){
        int c=0;
        for(int j=1;j<x;j++){
          if(i%j==0){c=c+1;}  
        }
        if(c<=2){l=l+1;}
    }
    *m=&l;
    int p=0;
    
    static int a[100];
    for(int i=x;i<y;i++){
        int c=0;
        for(int j=1;j<x;j++){
          if(i%j==0) c=c+1;  
        }
        if(c<2){
            a[p]=i;
            p=p+1;
        };
    }
    return a;
}
int main(void) {
    int *o;
    int *j;
    j=prime(15,25,&o);
     printf("Total No. of Elements - %d\n",*o);
 for(int i=0;i<*o;i++){
     if(*(j+i)==0) continue;
     printf("%d\n",*(j+i));
 }
	return 0;
}

