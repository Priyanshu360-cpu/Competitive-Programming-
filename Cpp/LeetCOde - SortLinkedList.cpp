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
    ListNode* sortList(ListNode* head) {
        vector<int> a;
        ListNode* header=new ListNode();
        header=NULL;
        while(head!=NULL){
            a.push_back(head->val);
            head=head->next;
        }
        sort(a.begin(),a.end());
        while(a.size()){
            ListNode* fial = new ListNode();
            fial->val=a[a.size()-1];
            fial->next=header;
            header=fial;
            a.pop_back();
        }
        return header;
    }
};
