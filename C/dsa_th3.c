#include <stdio.h>
#include <stdlib.h>
struct node{
    int val;
    struct node* next;
};
void ispalindrome(struct node* list){
    int n=0;
    while(list){
        n=n*10+list->val;
        list=list->next;
    }
    int f=0;
    int s=n;
    while(n){
        f=f*10+(n%10);
        n=n/10;
    }
    if(f==s)printf("YES\n");
    else printf("NO\n");
}
int main(){
           printf("enter linked list data");
    struct node* list=(struct node*)malloc(sizeof(struct node));
    list->next=NULL;
    struct node* temp=list;
    int n;
    scanf("%d",&n);
    while(n--){
        struct node* copy=(struct node*)malloc(sizeof(struct node));
        copy->next=NULL;
        int x;
        scanf("%d",&x);
        copy->val=x;
        temp->next=copy;
        temp=temp->next;
    }
    list=list->next;
    ispalindrome(list);
    return 0;
}
