
 struct ListNode {
     int val;
     ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        vector<ListNode*> h;
        h.push_back(head);
        ListNode* a=head;
        int p=0;
        while(a!=NULL){
            vector<ListNode*>::iterator it;
            it=find(h.begin(),h.end(),a->next);
            if(it==h.end()){
                h.push_back(a->next);
                a=a->next;
            }
            else{
                p=it-h.begin()+1;
                    a=NULL;
            }
            
        }
        if(p==0) return NULL;
        else{
            p=p-1;
            while(p--){
                head=head->next;
            }
        }
        return head;
        
    }
};
