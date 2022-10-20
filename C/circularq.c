#include <stdio.h>
#include <stdlib.h>
struct queue{
    int data;
    struct queue* next;
};
void enque(struct queue* q){
    if(q->data==__INT_MAX__){
        *q=*(q->next);
    }
    struct queue* storer=q;
    while(storer->next!=q){
        storer=storer->next;
    }
    struct queue* temp = (struct queue*)malloc(sizeof(struct queue));
    printf("Enter the data: ");
    scanf("%d",&temp->data);
    temp->next=q;
    storer->next=temp;
};
void dequeue(struct queue* q){
    struct queue* storer=q;
    while(q->next!=storer){
        q=q->next;
    }
    q->next=storer->next;
    free(storer);
};
void peek(struct queue* q){
    printf("%d",q->data);
};
void display(struct queue* q){
    struct queue* storer=q;
    while(q->next!=storer){
        printf("%d ",q->data);
        q=q->next;
    }
    printf("%d\n",q->data);
};
int main(){
struct queue* qu = (struct queue*)malloc(sizeof(struct queue));
qu->data=__INT_MAX__;
qu->next=qu;
while(1){
    printf(" 1.Enqueu \n 2. Dequeu \n 3. Display \n 4. Peek\n 5. Exit\n");
    int ch;
    scanf("%d",&ch);
    if(ch==1){
        enque(qu);
    }
    else if(ch==2){
        dequeue(qu);
    }
    else if(ch==3){
        display(qu);
    }
    else if(ch==4){
        peek(qu);
    }
    else if(ch==5){
        exit(0);
    }
    else{
        printf("Invalid Choice\n");
    }
}

}
