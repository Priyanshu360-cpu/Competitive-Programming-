#include <stdio.h>

int main(void) {
	int a[6]={2,10,4,5,6,7};
	int *p=&a[0];
	int *q=&a[3];
	int c=0;
	while(c<=2){
	    c=c+1;
	    if(*p>*q){
	        int h;
	        h=*p;
	        *p=*q;
	        *q=h;
	    }
	    q=q+1;
	    p=p+1;
	}
	p=a;
	for(int i=0;i<6;i++){
	    printf("%d\n",*(p+i));
	}
	printf("Reverse Order\n");
	for(int i=5;i>=0;i--){
	    printf("%d\n",*(p+i));
	}
	return 0;
}
