#include <stdio.h>
void zero(int* a){
    int p=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
          if(*((a+i*5)+j)==0)p=p+1;
        }
    }
    printf("%d No. of Zeroes\n",p);
    int s=0;
    for(int i=0;i<5;i++)s=s+(*(a+i));
    printf("Sum is %d\n",s);
    for(int i=0;i<5;i++){
        int k=0;
        for(int j=i;j<5;j++){
            printf("%d\n",*((a+j*5)+k));
            k=k+1;
        }
    }
    for(int i=4;i>=0;i--){
        int k=4;
        for(int j=i;j>=0;j--){
            printf("%d\n",*((a+j*5)+k));
            k=k-1;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
          printf("%d\t",*((a+i*5)+j));
        }
     printf("\n");
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d\t",*((a+j*5)+i));
        }
        printf("\n");
    }
}
int main(void) {
int a[5][5]={{0,1,2,3,4},{1,1,2,3,4},{0,1,2,3,4},{0,1,2,3,4},{0,1,2,3,4}};
zero((int *)a);
	return 0;
}

