
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL) return head;
        vector<Node*> a;
        vector<Node*> b;
        vector<Node*>::iterator it;
        while(head!=NULL){
            Node* d=new Node(head->val);
            b.push_back(d);
            a.push_back(head);
            head=head->next;
        }
        
        for(int i=0;i<a.size();i++){
            if(a[i]->random==NULL)b[i]->random=NULL;
            else{
                it=find(a.begin(),a.end(),a[i]->random);
                b[i]->random=b[it-a.begin()];
            }
            
        }
        for(int i=0;i<b.size()-1;i++){
            b[i]->next=b[i+1];
        }
        b[b.size()-1]->next=NULL;
        Node* e=b[0];
        return e;
    }
};

