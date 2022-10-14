/*
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
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        map<int,vector<Node*>> a;
        queue<Node*> b;
     for(auto x:node->neighbors){
            b.push(x);
        }
        a[node->val]=node->neighbors;
        while(!b.empty()){
            if(a.find(b.front()->val)==a.end()){
                a[b.front()->val]=b.front()->neighbors;
                for(auto x:b.front()->neighbors){
                    if(a.find(x->val)==a.end())
                    b.push(x);
                }
            }
        b.pop();
        }
        vector<Node*> c;
        for(auto x:a){
        Node* d=new Node(x.first);
        }
        return node;
    }
};
