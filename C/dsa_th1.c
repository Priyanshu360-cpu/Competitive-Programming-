#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

int algo(struct node* temp){
    struct checker{
    struct node* data;
    struct checker* next;
};
struct checker* check=(struct checker*)malloc(sizeof(struct checker));
check->next=NULL;
check->data=temp;
struct checker* copycheck=check;
while(temp){
struct checker* tempcheck=check;
    while(tempcheck){
    if(tempcheck->data==temp->next&&tempcheck->data!=NULL){
            temp->next=NULL;
            return 1;
        }
        tempcheck=tempcheck->next;
    }
        struct checker *newnode=(struct checker*)malloc(sizeof(struct checker));
        newnode->data=temp->next;
        newnode->next=NULL;
        copycheck->next=newnode;
        copycheck=copycheck->next;
temp=temp->next;
}
return 0;
}
int main(){
int n;
printf("Enter Size of Linked List:\n");
scanf("%d",&n);
int p;
int z=0;
printf("Want to add circularity?\nPress 1 for Yes\nPress 0 for No\n");
scanf("%d",&z);
if(z==1){
    printf("Where you want to add Circularity?\n");
    scanf("%d",&p);
}else p=n+1;
struct node* list=(struct node*)malloc(sizeof(struct node));
list->next=NULL;
struct node* temp=list;
for(int i=1;i<=n+1;i++){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=i;
    newnode->next=NULL;
    temp->next=newnode;
    temp=newnode;
    if(i==p+1){
        temp->next=list->next;
        break;
    }
}
list=list->next;
temp=list;
int s = algo(temp);
if(s==1){
   printf("Circularity Found\n");
   printf("Circular Linked List is:\n");
    } else {
        printf("Circularity Not Found\n");
        printf("Original Linked List is:\n");
    }
temp=list;
while(temp->next!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}
}
