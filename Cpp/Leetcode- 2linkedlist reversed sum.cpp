/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* last = NULL;
        
        ListNode** head_ref = NULL;
     
      int c=1;
        int s=0;
        int c2=1;
        int s2=0;
        int t;
        ListNode* l3;
        
           while(l1->next){
               s=s+((l1->val)*c);
               c=c*10;
               l1=l1->next;
           }
        s=s+((l1->val)*c);
                   while(l2->next){
               s2=s2+((l2->val)*c2);
               c2=c2*10;
               l2=l2->next;
           }
         s2=s2+((l2->val)*c2);
    t=s+s2;
        printf("%d\n",t);

        while(t){
         
            l3->val=t%10;
            l3->next=(*head_ref);
            (*head_ref)=l3;
            t=t/10;
        }
         last=l3;
        printf("%d\n",last->val);
        l3->next=NULL;
        return l3;
    }
};
