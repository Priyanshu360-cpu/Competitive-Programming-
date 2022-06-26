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
        vector<int> a;
        int c=0;
        int o=0;
    while(l1!=NULL||l2!=NULL){
        int p,q;
        if(l1==NULL){
            p=0;
        }else{
            p=l1->val;
            l1=l1->next;
        }
        if(l2==NULL){
            q=0;
        }else{
            q=l2->val;
            l2=l2->next;
        }
        o=p+q+c;
        if(o>=10){
            c=o/10;
            o=o%10;
        }else{
            c=0;
        }
        a.push_back(o);
    }
        if(c>0) a.push_back(c);
        ListNode* l3=new ListNode(a[a.size()-1]);
        a.pop_back();
        while(a.size()){
           ListNode *l4=new ListNode(a[a.size()-1]);
            l4->next=l3;
            l3=l4;
            a.pop_back();
        }
        return l3;
    }
};
