#include <stdio.h>
#include <stdlib.h>
struct node{
    struct node* prev;
    int val;
    struct node* next;
};
void algo(struct node* list,int n){
    struct node* temp=list;
    int f=1;
    while(temp->next){
      if(f%n==0){
        temp->next->prev=temp->prev;
        temp->prev=temp->next;
        temp->next->next=temp;
        temp->next=temp->next->next;
}
f+=1;
    }
}
int main(){
    struct node* list=(struct node*)mallloc(sizeof(struct node));
    list->next=NULL;
    list->prev=NULL;
    struct node* temp=list;
    int n;
    scanf("%d",&n);
    while(n--){
        int x;
        scanf("%d",&x);
        struct node* current=(struct node*)malloc(sizeof(struct node));
        current->val=x;
        current->next=NULL;
        list->next=current;
        current->prev=list;
        list=list->next;
    }
}
