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
         ListNode* last = new ListNode(0);
     last->next=NULL;
    
      unsigned int c=1;
        long long int s=0;
        unsigned int c2=1;
        unsigned int s2=0;
        int t;
       vector<int> digits;
        
           while(l1->next){
               s=s+((l1->val)*c);
               c=c*10;
               l1=l1->next;
           }
        s=s+((l1->val)*c);
                   while(l2->next){
               s2=s2+((l2->val)*c2);
                      
               c2=c2*10;
                        
               l2=l2->next;
           }
        
         s2=s2+((l2->val)*c2);
        
    t=s+s2;
        int r=0;
        while(t){
           r=r+1;
            t=t/10;
        }
        if(t!=0){
       for(int i=0;i<r;i++){
digits.push_back(re%10);
       re=re/10;}

        

       int g=digits.size()-1;
       last->val=digits[g];
       g=g-1;
        while(g>=0){
            ListNode* l3 = new ListNode();
            l3->val=digits[g];
            printf("%d\n",l3->val);
            l3->next=last;
            last=l3;
           g=g-1;
        }
        }
         
        return last;
    }
};
