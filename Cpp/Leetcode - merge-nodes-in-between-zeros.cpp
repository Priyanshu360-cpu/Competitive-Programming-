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
    ListNode* mergeNodes(ListNode* head) {
        vector<int> a;
        while(head!=NULL){
            a.push_back(head->val);
            head=head->next;
        }
        int r=0;
        vector<int> c;
        while(a.size()){
            if(a[a.size()-1]==0){
                if(r==0) {a.pop_back();continue;}
                else {c.push_back(r);r=0;}
            }else{
                r=r+a[a.size()-1];
            }
            a.pop_back();
        }
        ListNode* data =new ListNode();
        data=NULL;
        reverse(c.begin(),c.end());
        while(c.size()){
            ListNode* delta =new ListNode();
            delta->val=c[c.size()-1];
            delta->next=data;
            data=delta;
            c.pop_back();
        }
        return data;
    }
};
