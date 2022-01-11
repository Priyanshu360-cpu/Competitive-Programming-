#include <stdio.h>
int third(int *b,int a[][4],int *p){
    int max=b[0];
    int dmax=a[0][0];
    for(int i=0;i<5;i++){
        printf("%d\n",*(b+i));
        if(*(b+i)>max) max=*(b+i);
    }
    for(int i=0;i<1;i++){
        for(int j=0;j<4;j++){
            printf("%d\n",*(*(a+i)+j));
            if(*(*(a+i)+j)>dmax) dmax=*(*(a+i)+j);
        }
    }
    *p=dmax;
    return max;
}

void swap(int *b,int c){
    for(int i=0;i<5;i++){
        if(i==c) continue;
        else{
            *(b+i)=*(b+i)+c;
        }
    }
}
void two(int *b,int *a){
    for(int i=0;i<5;i++)*(b+i)=*(a+i);
}
int main(void) {
    int c;
	int a[5]={3,2,4,5,6};
	int g[5]={1,2,3,4,5};
	int d[1][4]={{1,2,3,4}};
	printf("%d",third(a,d,&c));
	printf("\n");
	swap(g,3);
	for(int i=0;i<5;i++){
	    printf("%d\n",g[i]);
	}
	return 0;
}

