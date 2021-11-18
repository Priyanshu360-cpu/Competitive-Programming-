#include <stdio.h>

int main(void) {
	int a,b,c,d,f;
scanf("%d%d%d",&a,&b,&c);
d=a+b+c;
if(d>5000){
f=30;
d=d-(d*0.3);
}
else if(d>3000){
f=20;
d=d-(d*0.2);}
else if(d>1000){
f=10;
d=d-(d*0.1);}
printf("Item\tAmount\n1\t%d\n2\t%d\n3\t%d\nTotal%d\nDiscount-%d\nTsa%d",a,b,c,a+b+c,f,d);
	return 0;
}

