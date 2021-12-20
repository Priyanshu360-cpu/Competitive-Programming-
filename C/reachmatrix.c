#include <stdio.h>
#define line printf("\n");
int main(void) {
	int c[6][6]={{0,1,0,0,0,0},{1,1,0,1,1,1},{1,0,0,1,0,1},{1,1,1,1,0,1},{0,0,0,1,1,1}};
	int j;
	int p;
	int h;
	int e;
	scanf("%d%d",&j,&p);
	while(1){
	    h=j;
	    e=p;
	    if(j==4){
	        printf("Reached destination");
	        break;
	    }
	    if(c[j+1][p]==1){
	        printf("%d%d",j+1,p);
	        line
	        j=j+1;
	        continue;
	    } 
	    if(c[j][p+1]==1){
	        printf("%d%d",j,p+1);
	        line
	        p=p+1;
	        continue;
	    }
	     if(c[j][p-1]==1){
	        printf("%d%d",j,p-1);
	        line
	        p=p-1;
	        continue;
	    }
	    
	} 
	
	return 0;
}
 
