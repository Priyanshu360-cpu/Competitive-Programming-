#include <stdio.h>

int main(void) {
	int a[5];
	int *p=&a[0];
	int b;
	scanf("%d",&b);

	for(int i=0;i<5;i++){
	    *(p+i)=b;
	    b=b+2;
	}
	for(int i=0;i<5;i++){
	    printf("%d\n",a[i]);
	}
	int d,e,k;
	
	scanf("%d%d%d",&d,&e,&k);
	int *q=&d;
	int *w=&e;
	int *r=&k;
	int max=*q>*w?*q>*r?*q:*r>*w?*r:*w:*r>*w?*r:*w;
	int min=*q<*w?*q<*r?*q:*r<*w?*r:*w:*r<*w?*r:*w;
	printf("%d %d\n",max,min);
	int z[5];
	int *o=&z[2];
	*o=3;
	printf("%d\n",z[2]);
	return 0;
}
