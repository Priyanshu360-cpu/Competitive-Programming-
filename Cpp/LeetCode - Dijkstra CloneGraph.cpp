
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};


class Solution {
public:
    void check(Node* node,vector<int>& visited){
        vector<int>::iterator it;
     for(int i=0;i<node->neighbors.size();i++){
         
          it = find (visited.begin(), visited.end(), node->neighbors[i]->val);
         if(it == visited.end()){visited.push_back(node->neighbors[i]->val);
         check(node->neighbors[i],visited);
                 }
     }   
    }
    void newgraph(Node* node,Node* l,vector<int>& vals,vector<Node*> a){
        for(auto x:node->neighbors){
            for(auto z:a){
                if(z->val==x->val){
                     (l->neighbors).push_back(z);
                }
            }
           
        }
        for(int i=0;i<node->neighbors.size();i++){
             vector<int>::iterator it;
            it = find (vals.begin(), vals.end(), node->neighbors[i]->val);
         if(it == vals.end()){vals.push_back(node->neighbors[i]->val);
        newgraph(node->neighbors[i],l->neighbors[i],vals,a);
        }
    }
    }
    Node* cloneGraph(Node* node) {
    Node* l=new Node(node->val);
       vector<int> visited;
       vector<int> vals;
        check(node,visited);
        
        vector<Node*> a;
       for(auto z:visited){
           Node* p=new Node(z);
           a.push_back(p);
       }
        newgraph(node,l,vals,a);
        return l;
    }
};
