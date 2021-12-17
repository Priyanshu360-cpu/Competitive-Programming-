#include <stdio.h>

int main(void) {
	char a[20];
	scanf("%[^\n]s",a);
	printf("Your name is %s",a); 
	printf("\n"); 
	int h;
		for(int i=0;i<20;i++){
	   if(a[i]=='\0'){
	       printf("%d",i);
	       h=i;
	       break;
	   }
	} 
	printf("\n");
	for(int i=h;i>=0;i--){
	    printf("%c",a[i]);
	} 
	printf("\n");
for(int i=5;i>=0;i--){
	    printf("%c",a[i]);
	} 
	for(int i=6;i<h;i++){
	    printf("%c",a[i]);
	}
	printf("\n");
	for(int i=0;i<h;i++){
	    printf("%c - Index %d\n",a[i],i);
	}
	
	return 0; 

}
