#include <stdio.h>
#define newl printf("\n");
int main(void) {
    int n;
    scanf("%d",&n); 
    for(int i=1;i<=n;i++){ 
   for(int j=1;j<=i;j++){ 
       printf("*"); 
   }
   newl 
    }
    newl 
    for(int i=n;i>=1;i--){ 
        for(int j=1;j<=i;j++){ 
            printf("*"); 
        }
        newl 
    } 
    printf("\n");
    for(int i=n;i>=1;i--) {
        for(int j=n-i;j>=1;j--){ 
            printf(" ");
        }
        for(int k =1;k<=i;k++) { 
            printf("*"); 
        }
        newl 
    }
    printf("\n"); 
     for(int i=1;i<=n;i++){ 
         for(int j=i;j>=1;j--) { 
             printf("%d",j);
         }
         newl 
     }
     printf("\n");
     for(int i=1;i<=n;i++) {
         for(int j=1;j<=n-i;j++) { 
             printf(" ");
         }
         for(int j=1;j<=i;j++) { 
             printf("1 ");
         }
         newl 
     }
     printf("\n");
     for(int i=1;i<=n;i++) {
         for(int j=1;j<=i;j++) { 
             if(i%2==0) {
                 printf("%d ",j);
             }
             else{
                 printf("1 ");
             }
         }
         newl 
     }
     printf("\n");
     for(int i=1;i<=n;i++) {
         for(int k=1;k<=n-i;k++) {
             printf(" ");
         }
         for(int j=1;j<=i;j++) {
             printf("1 ");
         }
         newl 
     }
     for(int i=n-1;i>=1;i--) {
         for(int k=n-i;k>=1;k--) { 
             printf(" ");
         }
         for(int j=1;j<=i;j++) {
             printf("1 "); 
         }
         newl
     }
     printf("\n*\n"); 
     for(int i=1;i<=n;i++) {
         printf("*");
         for(int k=1;k<=i;k++) {
             printf(" "); }
             printf("*");
             newl 
     }
     for(int j=1;j<=n+3;j++) { 
         printf("*");
     }
     printf("\n\n");
     int a = 1;
     for(int i =n;i>=1;i--) {
         for(int j=1;j<=i;j++) {
             
             printf("%d",a);
             a=a+1; 
         }
         newl 
     }
     a=1;
         printf("\n");
         for(int i =n;i>=1;i--) {
             if(i%2==0) {
                 for(int j=1;j<=i;j++){
                     printf("%d",a); 
                     a=a+1;
                 }
             }
             else {
                 a=a+i-1;
                 int y = a;
                 for(int k=1;k<=i;k++) {
                     printf("%d",a);
                     a=a-1;
                 }
                 a=y+1;
             }
             newl
         }
         printf("\n");
         int s=64;
         for(int i=1;i<=n;i++) { 
             s=s+1;
             for(int j=1;j<=i;j++) { 
                 printf("%c",s);
             }
             newl
         }
                 newl
                 s=64;
                 for(int i=1;i<=n;i++) {
                     for(int j=1;j<=i;j++) {
                         s=s+1;
                         printf("%c",s); }
                         s=64;
                         newl
                 }
                 newl 
                 s=((n*(n+1))/2);
                 for(int i =n;i>=1;i--){
                     for(int j=1;j<=i;j++){
                         printf("%d ",s);
                         s=s-1;
                     }
                     newl
                 }
     newl
     for(int i =1;i<=n;i++){
         for(int j=1;j<=i;j++){
             printf("*");
         }
         newl
     }
     for(int i =n;i>=1;i--){
         for(int j=1;j<=i;j++){
             printf("*");
         }
         newl
     }
     newl
     int u=1;
     for(int i =n;i>=1;i--){
         for(int k=1;k<=u-1;k++){
             printf("o");
         }
         printf("*");
         for(int j =i;j>=1;j--){
             printf("=");
         }
         printf("*");
             for(int p=1;p<=u-1;p++){
                 printf("#");
             }
         
         u=u+1;
         newl
     } 
     u=1;
   for(int i =n;i>=1;i--){
         for(int k=1;k<=i;k++){
             printf("o");
         }
         printf("*");
         for(int j =1;j<=u;j++){
             printf("@");
         }
         printf("*");
             for(int p=1;p<=i;p++){
                 printf("#");
             }
         
         u=u+1;
         newl
     }
      }
