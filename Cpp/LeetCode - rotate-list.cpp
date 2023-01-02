class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0)return head;
        deque<ListNode*> b;
        int g=0;
        while(head){
            g+=1;
            b.push_back(head);
            head=head->next;
        }
        if(g==0)return head;
        k=k%g;
        while(k--){
            ListNode* temp=b.back();
            b.pop_back();
            b.push_front(temp);
        }
        b.back()->next=NULL;
        deque<ListNode*>::iterator it;
    for (it = b.begin(); it != b.end(); ++it){
        if(head==NULL)head=*it;
        else{
            head->next=*it;
            head=head->next;
        }
    }
    return b.front();
    }
};
