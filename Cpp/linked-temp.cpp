#include <stdio.h>
struct node{
    int x;
    struct node* next;
};
int main(){

struct node* temp;
struct node** last=&main;
int c=0;
while(c!=3){
    struct node* main;
main = (struct node*)malloc(sizeof(struct node));
main->x=c+1;
main->next=temp;
temp=main;
c=c+1;
}
printf("%d",temp->next->next->x);
    return 0;
}
