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
    ListNode* reverseList(ListNode* head) {
        ListNode* data=new ListNode();
        data=NULL;
        vector<int> a;
        while(head!=NULL){
a.push_back(head->val);
        head=head->next;}
        reverse(a.begin(),a.end());
        while(a.size()){
            ListNode* delta = new ListNode();
            delta->val=a[a.size()-1];
            delta->next=data;
            data=delta;
            a.pop_back();
        }
        return data;
    }
};
