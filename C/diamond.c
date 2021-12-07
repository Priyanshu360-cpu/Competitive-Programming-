#include <stdio.h>
#define newline printf("\n");
int main(void) {
    int a,b;
    scanf("%d%d",&a,&b);
    int c[a][b];
    int o=1;
     for(int i = 0;i<=a;i++){
        for(int j=0;j<=b;j++){
            c[i][j]=o;
            o++;
        }
    } 
    
    for(int i = 0;i<=5;i++){
        int j =5;
        for(j=j-1;j>=0;j--){
            printf("%d",c[i][j]);
        }
        newline
    } 
     for(int i = 5;i>=0;i--){
        int j =0;
        for(j=j+1;j>=0;j--){
            printf("%d",c[i][j]);
            
        }
        newline
    } 
    for(int i = 5;i>=5/2;i--){
        int j =5;
        for(j=i;j>=0;j--){
            printf("%d",c[i][j]);
            
        }
        newline
    } 
    for(int i=0;i<=5/2;i++){
        int j=5;
        for(j=j--;j>=0;j--){
            printf("%d",c[i][j])
        }
    }
    newline
}
