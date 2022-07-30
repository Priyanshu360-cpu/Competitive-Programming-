#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    int p=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=p;
            p=p+1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
   for(int i=0;i<n;i++){
         for(int k=0;k<n-i;k++)printf(" ");
        for(int j=n-1-i;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
}
 for(int i=0;i<n;i++){
        for(int k=0;k<i;k++)printf(" ");
    for(int j=i;j<n;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
   for(int i=0;i<n;i++){
       for(int j=n-1-i;j>=0;j--) printf("%d\t",a[i][j]);
       printf("\n");
   }
   return 0;
}
