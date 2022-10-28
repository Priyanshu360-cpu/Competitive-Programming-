class MyLinkedList {
public:
    struct node{
        int data;
        struct node* next;
    };
    struct node* p;
    MyLinkedList() {
        p=(struct node*)malloc(sizeof(struct node));
        p=NULL;
    }
    
    int get(int index) {
        int t=0;
        struct node* q=p;
        while(q){
            if(t==index)return q->data;
            t+=1;
            q=q->next;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        struct node* s=(struct node*) malloc(sizeof(struct node));
        s->data=val;
        s->next=p;
        p=s;
    }
    
    void addAtTail(int val) {
         struct node* s=(struct node*) malloc(sizeof(struct node));
        s->data=val;
        s->next=NULL;
        if(p==NULL){
        p=s;
        }
        else{
            struct node* q=p;
        while(q->next!=NULL){
            q=q->next;
        }
            q->next=s;
            }
    }
    void addAtIndex(int index, int val) {
        int t=1;
        struct node* q=p;
        while(q){
            if(t==index){
                struct node* s=(struct node*)malloc(sizeof(struct node));
                s->data=val;
                s->next=q->next;
                q->next=s;
                return;
            }
            t+=1;
            q=q->next;
        }
    }
    
    void deleteAtIndex(int index) {
          int t=1;
        struct node* q=p;
        while(q){
            if(t==index){
                if(q->next==NULL)return;
                q->next=q->next->next;
                return;
            }
            t+=1;
            q=q->next;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
