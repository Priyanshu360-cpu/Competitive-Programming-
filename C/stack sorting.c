#include <stdio.h>
#include <stdlib.h>
struct stack{
    int val;
    struct stack* next;
};
void push(struct stack** stack,int val){
    struct stack* newnode=(struct stack*)malloc(sizeof(struct stack));
    newnode->val=val;
    newnode->next=*stack;
    *stack=newnode;
}
void pop(struct stack** stack){
    *stack=(*stack)->next;
}
int main(){
    struct stack* s=(struct stack*)malloc(sizeof(struct stack));
    s->next=NULL;
    int n;
    printf("Enter number of Numbers\n");
    scanf("%d",&n);
    while(n--){
        printf("Enter Number");
        int f;
        scanf("%d",&f);
        if(s->next==NULL&&!s->val)s->val=f;
        else push(&s,f);
    }
    struct stack* q=(struct stack*)malloc(sizeof(struct stack));
    q->next=NULL;
    pop(&q);
    push(&q,s->val);
    pop(&s);
    while(s){
        int r=0;
        if(s->val<=q->val){
            push(&q,s->val);
        }else{
            int k=s->val;
            pop(&s);
            r=1;
            while(q&&k>q->val){
                 struct stack* duplicate=(struct stack*)malloc(sizeof(struct stack));
                   push(&s,q->val);
                   pop(&q);  
            }
             struct stack* duplicate=(struct stack*)malloc(sizeof(struct stack));
               push(&q,k);
        }
        if(r==0)
        pop(&s);
    }
   s=q;
   while(s){
    printf("%d ",s->val);
    pop(&s);
       }
}
