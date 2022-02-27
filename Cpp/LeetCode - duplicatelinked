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
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int>c;
        if(head==NULL) return head;
        while(head!=NULL){int r=0;
            for(int i=0;i<c.size();i++){
                if(c[i]==head->val)r=1;
            }
                          if(r==0){
            c.push_back(head->val);
                          }
            head=head->next;
        }
        ListNode* Mai=new ListNode();
        Mai=NULL;
        while(c.size()){
            ListNode* seco=new ListNode();
            seco->val=c[c.size()-1];
            seco->next=Mai;
            Mai=seco;
            c.pop_back();
        }
        return Mai;
    }
};
