#include <stdio.h>
#include <stdlib.h>
void insertatbegin(int* a,int* f,int b){
    *f=*f+1;
    a[*f]=b;
}
void insertatend(int* a,int* r,int b){
    if(*r==0){
        printf("Not Handled");
    }
    else{
    *r=*r-1;
    a[*r]=b;
    }
}
void deleteatbegin(int* a,int* f,int* r){
    if(*f==*r){
        printf("Queue is empty");
    }else 
    *f=*f-1;
}
void deleteatend(int* a,int* r){
    *r=*r+1;
}
int main(){
    int n;
    printf("Enter Size of Enqueue: ");
    scanf("%d",&n);
    int *arr = (int*)malloc(n*sizeof(int));
    int front = -1;
    int rear = n;
    while(1){
        printf("1. Insert at beginnning\n 2. Insert at end\n 3. Delete at beginnning\n 4. Delete at end\n 5. Exit\n");
        int ch;
        scanf("%d",&ch);
        if(ch==1){
            int b;
            printf("Enter the element to be inserted: ");
            scanf("%d",&b);
            insertatbegin(arr,&front,b);
        }
        else if(ch==2){
            int b;
            printf("Enter the element to be inserted: ");
            scanf("%d",&b);
            insertatend(arr,&rear,b);
        }
        else if(ch==3){
            deleteatbegin(arr,&front,&rear);
        }
        else if(ch==4){
            deleteatend(arr,&rear);
        }
        else if(ch==5){
            exit(0);
        }
        else{
            printf("Invalid Choice");
        }
}
}
