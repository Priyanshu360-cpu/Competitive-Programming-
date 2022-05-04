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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> b;
         vector<int> c;
        ListNode *a=new ListNode();
        a=NULL;
        while(l1!=NULL){
           b.push_back(l1->val);
           l1=l1->next;
        }
        while(l2!=NULL){
           c.push_back(l2->val);
           l2=l2->next;
        }
       long long  int ba=0;
        long long  int ca=0;
      
       while(b.size()!=0){
           ba=ba*10+b[b.size()-1];
           b.pop_back();
       }
      
         while(c.size()!=0){
           ca=(ca*10)+c[c.size()-1];
           c.pop_back();
       }
        long long  int ab=ca+ba;
vector<int> da;
        if(ab==0){
            da.push_back(0);
        }
        while(ab!=0){
            da.push_back(ab%10);
            ab=ab/10;
        }
        while(da.size()!=0){
            ListNode *h=new ListNode();
            h->val=da[da.size()-1];
            h->next=a;
            a=h;
            da.pop_back();
        }
        return a;
    }
};
