#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
void insertatbeginning(struct node* qu){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&temp->data);
    temp->next=qu;
    *qu=*temp;
}
void insertatend(struct node* qu){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&temp->data);
    while(qu->next!=NULL){
        qu=qu->next;
    }
    temp->next=NULL;
    qu->next=temp;
}
void deleteatbeginning(struct node* qu){
    struct node* temp=qu;
    *qu = *(qu->next);
}
void deleteatend(struct node* qu){
    if(qu->next==NULL)return;
    while(qu->next->next!=NULL){
        qu=qu->next;
    }
    qu->next=NULL;
}
int main(){
    struct node* q=(struct node*)malloc(sizeof(struct node));
    q->next=NULL;
    q->data=__INT_MAX__;
    while(1){
        printf(" 1. Insert at beginning \n 2. Insert at end \n 3. Delete at beginning \n 4. Delete at end \n 5. Exit\n");
        int ch;
        scanf("%d",&ch);
        if(ch==1){
            insertatbeginning(q);
        }
        else if(ch==2){
            insertatend(q);
        }
        else if(ch==3){
            deleteatbeginning(q);
        }
        else if(ch==4){
            deleteatend(q);
        }
        else if(ch==5){
            exit(0);
        }
        else{
            printf("Invalid Choice");
        }
    }
}
