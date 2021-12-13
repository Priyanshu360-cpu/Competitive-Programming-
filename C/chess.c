
#include <stdio.h>
#define line printf("\n");
int main(void) {
	int a[8][8]={{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0}};
	int p,j;
	int y,f; 
	int s[4][2];
	int u[4];
	int q;
	scanf("%d%d",&p,&j);
	int o=0;
	while(1){
	    if(o==1){
	        break;
	    } 
	    if(a[j+2][p+1]==0){
	        y=j+2;
	        f=p+1;
	        if(p+1>=0&&j+2>=0){
	            if(p+1<=8&&j+2<=8){
	        printf("%d %d",j+2,p+1);
	        line
	        }
	        }
	        s[0][0]=y;
	        s[0][1]=p;
	        u[0]=1;
	        
	    }
	    if(a[j+2][p-1]==0){
	         y=j+2;
	        f=p-1;
	        if(p-1>=0&&j+2>=0){
	            if(p-1<=8&&j+2<=8){
	        printf("%d %d",j+2,p-1);
	        line
	        }
	        }
	        s[1][0]=y;
	        s[1][1]=p;
	        u[1]=1;
	    }
	    if(a[j-2][p+1]==0){
	        y=j-2;
	        f=p+1;
	        if(p+1>=0&&j-2>=0){
	            if(p+1<=8&&j-2<=8){
	        printf("%d %d",j-2,p+1);
	        line
	        }
	        }
	        s[2][0]=y;
	        s[2][1]=p;
	        u[2]=1;
	    }
	    if(a[j-2][p-1]==0){
	         y=j-2;
	        f=p-1;
	        if(p-1>=0&&j-2>=0){
	            if(p-1<=8&&j-2<=8){
	        printf("%d %d",j-2,p-1);
	        line
	        }
	        }
	        s[3][0]=y;
	        s[3][1]=p;
	        u[3]=1;
	    }
	    
           r:
            q=(rand() %
           (4));
           if(u[q]!=1) goto r;
        j=s[q][0];
        p=s[q][1];
	    o=o+1;
	}
	return 0;
}
