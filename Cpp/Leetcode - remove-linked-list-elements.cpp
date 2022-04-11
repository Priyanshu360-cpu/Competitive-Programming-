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
    ListNode* removeElements(ListNode* head, int val) {
        vector<int> a;
        while(head!=NULL){
            a.push_back(head->val);
            head=head->next;
        }
        ListNode* ans=new ListNode();
        ans=NULL;
        while(a.size()){
            if(a[a.size()-1]==val) {
                  a.pop_back();
        continue;
       }
            ListNode* answ=new ListNode();
            answ->val=a[a.size()-1];
            answ->next=ans;
            ans=answ;
            a.pop_back();
        }
        return ans;
    }
};
