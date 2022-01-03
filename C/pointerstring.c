#include <stdio.h>

int main(void) {
	char a[20];
	scanf("%[^\n]s",a);
   char *g=&a[2];
  int i=3;
   while(*g!='\0'){
       printf("%c",*g);
       g=&a[i];
       i++;
   }
   
  int l,b;
   scanf("%d",&l);
   scanf("%d",&b);
   int *h=&l;
   int *j=&b;
   int c;
   c=h;
   h=j;
   j=c;
   printf("\n");
   printf("%d %d",b,l);
	return 0;
}
