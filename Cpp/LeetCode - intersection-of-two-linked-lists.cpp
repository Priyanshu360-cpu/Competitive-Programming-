class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        vector<ListNode*> a;
 while(headA){
            a.push_back(headA);
            headA=headA->next;
        }
        vector<ListNode*>::iterator it;
 while(headB){
            it=find(a.begin(),a.end(),headB);
            if(it!=a.end())return headB;
            headB=headB->next;
        }
        return  NULL;
    }
};
