
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL) return head;
        vector<ListNode*> a;
        vector<ListNode*> b;
        while(head!=NULL){
            if(head->val<x)a.push_back(head);
            else b.push_back(head);
            head=head->next;
        }
if(a.size()!=0){
        for(int i=0;i<a.size()-1;i++){
            a[i]->next=a[i+1];
        }
}
        if(b.size()==0){
            a[a.size()-1]->next=NULL;
        }else{
            if(a.size()!=0){
            a[a.size()-1]->next=b[0];
            }
            for(int i=0;i<b.size()-1;i++){
                b[i]->next=b[i+1];
            }
                        b[b.size()-1]->next=NULL;

        }
        if(a.size()){
        return a[0];
        }
        else return b[0];
    }
};
