
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
    void check(queue<int> &s,Node* node, vector<int> &visited){
int h=s.front();
        s.pop();
        fot(int i=0;i<visited.size();i++)
        if(visited[i]==h) cout<<"step"<<endl;
    }
    Node* cloneGraph(Node* node) {
        Node* l=new Node(node->val);
       vector<int> visited;
       visited.push_back(node->val);
       queue<int> p;
       p.push(node->val);
       for(int i=0;i<node->neighbors.size();i++) cout<<node->neighbors[i]->neighbors[1]->
           neighbors[1]->val<<endl;
       for(int i=0;i<<node->neighbors[1]->neighbors.size();i++) cout<<node->neighbors[1]->neighbors[i]->val<<endl;
        
        return l;
    }
};
