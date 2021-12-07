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
    
    for(int i = 0;i<=a;i++){
        int j =b;
        for(j=j-1;j>=0;j--){
            printf("%d",c[i][j]);
        }
        newline
    } 
     for(int i = a;i>=0;i--){
        int j =0;
        for(j=j+1;j>=0;j--){
            printf("%d",c[i][j]);
            
        }
        newline
    } 
    for(int i = a;i>=a/2;i--){
        int j =b;
        for(j=i;j>=0;j--){
            printf("%d",c[i][j]);
            
        }
        newline
    } 
    for(int i=0;i<=i/2;i++){
        int j=b;
        for(j=j--;j>=0;j--){
            printf("%d",c[i][j])
        }
    }
    newline
}
