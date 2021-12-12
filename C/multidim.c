//input 2 3
#include <stdio.h>

int main(void) {
	int a[5][5]={{2,3,3,4,5},{8,4,5,6,7},{2,3,3,4,5},{8,4,5,6,7},{2,3,3,4,5}};
	for(int i=1;i<=4;i++){
	    
	    for(int j=i;j>=0;j--){ 
	        for(int k=j;k>=0;k--){
	            printf(" ");
	        }
	    printf("%d\n",a[i][j]);
	    }
	    printf("\n");
	}
	for(int i=4;i>=0;i--){
	    int b=1;
	    for(int j=1;j<=i;j++){ 
	        for(int k=j;k>=0;k--){
	            printf(" ");
	        }
	    printf("%d\n",a[i][b]);
	    b++;
	    }
	    printf("\n");
	} 
	int p,g,f;
	scanf("%d%d",&p,&g);
	f=a[p][g];
	if(a[p+1][g]) f=f+(a[p+1][g]);
	if(a[p-1][g]) f=f+(a[p-1][g]);
	if(a[p][g+1]) f=f+(a[p][g+1]);
	if(a[p][g-1]) f=f+(a[p][g-1]); 
	printf("Sum = %d\n",f);
    int r[5][5];
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
    f=a[i][j];
	if(a[i+1][j]>0) f=f+(a[i+1][j]);
	if(a[i-1][j]>0) f=f+(a[i-1][j]);
	if(a[i][j+1]>0) f=f+(a[i][j+1]);
	if(a[i][j-1]>0) f=f+(a[i][j-1]); 
	r[i][j]=f;
        }
    } 
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            printf("%d\t",r[i][j]);
        }
        printf("\n");
    } 
    printf("\n");
    int l=4;
    for(int i=1;i<=3;i++){
        for(int k=1;k<=i;k++){
            printf(" ");
        }
        for(int j=i-1;j<=l;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
        l=l-1;
    }
    l=4;
    for(int i=4;i>=2;i--){
        for(int k=4-i;k>=0;k--){
            printf(" ");
        }
        for(int j=4-i;j<=l;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
        l=l-1;
    } 
    for(int i=0;i<=4;i++){
        for(int j=0;j<=i;j++){
            printf("%d",a[i][j]);
        } 
        printf("\n");
    } 
    printf("\n");
    l=4;
     for(int i=0;i<=4;i++){
        for(int j=0;j<=i;j++){
            printf("%d",a[i][l]);
            l=l-1;
        } 
        l=4;
        printf("\n");
    }
	return 0;
}
