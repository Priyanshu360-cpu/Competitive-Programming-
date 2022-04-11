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
    bool isPalindrome(ListNode* head) {
        vector<int> a;
        while(head!=NULL){
            a.push_back(head->val);
            head=head->next;
        }
        vector<int> c=a;
        reverse(a.begin(),a.end());
        if(a==c) return true;
        else return false;
    }
};
