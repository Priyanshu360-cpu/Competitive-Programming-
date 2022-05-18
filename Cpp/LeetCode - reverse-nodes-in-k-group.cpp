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
    ListNode* reverseKGroup(ListNode* head, int k) {
           if(head==NULL) return head;
    vector<int> a;
                    ListNode* d=new ListNode();
d=NULL;
     while(head!=NULL){
         a.push_back(head->val);
         head=head->next;
     }
        for(int i=0;i<(a.size()-k+1);i=i+k){
      reverse(a.begin()+i,a.begin()+k+i);
        }
        while(a.size()){
            ListNode* c=new ListNode();
            c->val=a[a.size()-1];
            c->next=d;
            d=c;
            a.pop_back();
        }
        return d;
    }
};
