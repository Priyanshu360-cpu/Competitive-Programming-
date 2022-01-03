#include <stdio.h>

int main(void) {
	char a[20];
	scanf("%[^\n]s",a);
   char *g=&a[1];
   while(*g!='\0'){
       printf("%c",*g);
       g=g+1;
   }
   
  int l,b;
   scanf("%d",&l);
   scanf("%d",&b);
   int *h=&l;
   int *j=&b;
   int c;
   c=*h;
   *h=*j;
   *j=c;
   printf("\n");
   printf("%d %d",l,b);
   int f,x;
   int *u=&f,*k=&x;
   scanf("%d%d",u,k);
   printf("\n");
   printf("%d %d",f,x);
	return 0;
}
