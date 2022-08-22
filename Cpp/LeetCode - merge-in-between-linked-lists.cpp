class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* first;
        ListNode* second;
        ListNode* hehe=list1;
        int k=1;
        if(a==1)first=list1;
        while(list1){
         if(k==a-1)first=list1->next;
            if(k==b+1)second=list1->next;
            list1=list1->next;
            k+=1;
        }
        ListNode* third=list2;
        ListNode* foru;
        while(list2){
            if(!list2->next)
                foru=list2;
            list2=list2->next;
        }
        first->next=third;
        foru->next=second;
        return hehe;
    }
};
