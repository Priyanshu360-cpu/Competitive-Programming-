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
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int> a;
        vector<int> b;
        if(head==NULL) return head;
        ListNode* copy=head;
        while(head!=NULL){
            a.push_back(head->val);
            head=head->next;
        }
        for(int i=0;i<a.size();i++){
            int f=0;
            for(int j=0;j<a.size();j++){
                if(i==j) continue;
                if(a[i]==a[j]) {f=1;break;}
            }
            if(f==1)continue;
            else b.push_back(a[i]);
        }
        sort(b.begin(),b.end());
        ListNode* fi = new ListNode();
        fi=NULL;
        while(b.size()){
            ListNode* g=new ListNode();
            g->val=b[b.size()-1];
            g->next=fi;
            fi=g;
            b.pop_back();
        }
        return fi;
    }
};
