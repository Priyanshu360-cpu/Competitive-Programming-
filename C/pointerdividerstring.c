#include <stdio.h>

int main(void) {
	char a[20];
	int c=1;
	int i=0;
	while(c<=5){
	scanf("%s",a+i);
	i=i+4;
	c=c+1;
	}
	i=0;
	while(*(a+i)!='\0'){
	    printf("%c",*(a+i));
	    i=i+1;
	}
	return 0;
}
