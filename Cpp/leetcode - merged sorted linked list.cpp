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
        while(list1->next){
            a.push_back(list1->val);
            list1=list1->next;
        }
         while(list2->next){
            a.push_back(list2->val);
            list2=list2->next;
        }
       sort(a.begin(), a.end());
        ListNode* head;
        for(int i=a.size()-1;i>=0;i++){
            ListNode* l3;
            l3 = (struct ListNode*)malloc(sizeof(struct ListNode));
            l3->val=a[i];
            l3->next=head;
            head=l3;
        }
        return head;
    }
};
