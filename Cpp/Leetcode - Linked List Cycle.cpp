/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* heade=new ListNode();
        heade=NULL;
        vector <ListNode*> a;
        while(head!=NULL){
            int l=0;
            for(int i=0;i<a.size();i++){
                if(a[i]==head->next){
                    l=1;
                    break;
                }
            }
            if(l==1) return true;
           else{
               a.push_back(head->next);
           }
            head=head->next;
}
        return false;
    }
};
