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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
      vector<int> a;
        while(head!=NULL){
            a.push_back(head->val);
            head=head->next;
        }
        reverse(a.begin() + left-1, a.begin() + (right));
ListNode* ans=new ListNode();
        ans=NULL;
        while(a.size()){
            ListNode* di=new ListNode();
            di->val=a[a.size()-1];
            di->next=ans;
            ans=di;
            a.pop_back();
        }
        return ans;
    }
};
