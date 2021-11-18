#include <stdio.h>

int main(void) {
    int a,b,c,d,e,f;
    
scanf("%d%d%d",&a,&b,&c);
if(a>3000){
a=a-(a*0.3);
}
else if(a>2000){
a=a-(a*0.2);
}
if(b>3000){
b=b-(b*0.3);
}
else if(b>2000){
b=b-(b*0.2);
}
if(c>3000){
c=c-(a*0.3);
}
else if(c>2000){
c=c-(c*0.2);
}
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
	// your code goes here
	return 0;
}

