#include <stdio.h>
#include <stdlib.h>
struct node{
    int val;
    int priority;
    struct node* next;
};
void display(struct node* list){
   struct node* list1=(struct node*)malloc(sizeof(struct node));
   list1->next=NULL;
   struct node* copy1=list1;
   struct node* list2=(struct node*)malloc(sizeof(struct node));
   list2->next=NULL;
    struct node* copy2=list2;
   struct node* list3=(struct node*)malloc(sizeof(struct node));
   list3->next=NULL;
    struct node* copy3=list3;
   struct node* list4=(struct node*)malloc(sizeof(struct node));
   list4->next=NULL;
    struct node* copy4=list4;
   struct node* list5=(struct node*)malloc(sizeof(struct node));
   list5->next=NULL;
    struct node* copy5=list5;
   while(list){
    switch(list->priority){
        case 1:
            copy1->next=list;
            copy1=copy1->next;
            break;
        case 2:
            copy2->next=list;
            copy2=copy2->next;
            break;
        case 3:
            copy3->next=list;
            copy3=copy3->next;
            break;
        case 4:
            copy4->next=list;
            copy4=copy4->next;
            break;
        case 5:
            copy5->next=list;
            copy5=copy5->next;
            break;
    }
    list=list->next;
   }
list1=list1->next;
list2=list2->next;
list3=list3->next;
list4=list4->next;
list5=list5->next;
while(list1){
    printf("%d\n",list1->val);
    list1=list1->next;
}
while(list2){
    printf("%d\n",list2->val);
    list2=list2->next;
}
while(list3){
    printf("%d\n",list3->val);
    list3=list3->next;
}
while(list4){
    printf("%d\n",list4->val);
    list4=list4->next;
}
while(list5){
    printf("%d\n",list5->val);
    list5=list5->next;
}

}
int main(){
    struct node* list=(struct node*)malloc(sizeof(struct node));
    list->next=NULL;
    struct node* copy=list;
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        struct node* current=(struct node*)malloc(sizeof(struct node));
int x,y;
printf("Enter value\n");
scanf("%d",&x);
printf("Enter priority\n");
scanf("%d",&y);
        current->val=x;
        current->priority=y;
        current->next=NULL;
        copy->next=current;
        copy=copy->next;
    }
    list=list->next;
    display(list);
}
