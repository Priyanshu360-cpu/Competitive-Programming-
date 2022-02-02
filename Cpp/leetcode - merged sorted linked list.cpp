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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> x;
        vector<int> a;
       if(list1==NULL&&list2==NULL){
          return list1;
       }
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        while(list1->next){
            a.push_back(list1->val);
            list1=list1->next;
        }
         a.push_back(list1->val);
         while(list2->next){
            a.push_back(list2->val);
            list2=list2->next;
        }
        a.push_back(list2->val);
       sort(a.begin(), a.end());
          ListNode* head=new ListNode(a[a.size()-1]);
        a.pop_back();
       
      for(int i=a.size()-1;i>=0;i--){
          ListNode* l3=new ListNode();
          l3->val=a[i];
          l3->next=head;
          head=l3;
      }
        return head;
    }
};
