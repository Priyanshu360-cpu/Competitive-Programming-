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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode *l5=head;
         vector<int> xc;
        while(l5->next){
            xc.push_back(l5->val);
            l5=l5->next;
        }
        xc.push_back(l5->val);
      
        int h;
        if(xc.size()==1){
            ListNode* l6=new ListNode(0);
            l6=NULL;
            return l6;
        }
        if(n==1) xc.pop_back();
            h=xc[xc.size()-1];
            xc.pop_back();
        ListNode* l1=new ListNode(h);
       for(int i=xc.size()-1;i>=0;i--){
           if(i==(xc.size()-n+1)) continue;
           ListNode* l3 = new ListNode();
           l3->val=xc[i];
           l3->next=l1;
           l1=l3;
       }
        
        return l1;
    }
};
