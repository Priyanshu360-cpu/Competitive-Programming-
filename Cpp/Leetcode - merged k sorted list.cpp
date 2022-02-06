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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         ListNode* l4=new ListNode(NULL);
            l4=NULL;
        if(lists.size()==0)return l4;
        vector<int> c;
        for(int i=0;i<lists.size();i++){
            if(lists[i] == NULL) continue;
            while(lists[i]->next!=NULL) {c.push_back(lists[i]->val);lists[i]=lists[i]->next;}
            c.push_back(lists[i]->val);
        }
        if(c.size()==0) return l4;
        sort(c.begin(),c.end());
        ListNode* head=new ListNode(c[c.size()-1]);
        c.pop_back();
        while(c.size()){
           ListNode* l3=new ListNode();
          l3->val=c[c.size()-1];
          l3->next=head;
          head=l3;
        c.pop_back();
        }
        return head;
    }
};
