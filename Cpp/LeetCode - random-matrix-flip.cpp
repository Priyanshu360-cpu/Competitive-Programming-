class Solution {
public:
map<pair<int,int>,int> c;
int a,b;
    Solution(int m, int n){
        a=m;
        b=n;    
    }
    
    vector<int> flip() {
        L:
        int p=0+ (rand() % a);
        int r=0+ (rand() % b);
        if(c.find({p,r})!=c.end())goto L;
        c[{p,r}]=1;
        return {p,r}; 
    }
    
    void reset() {
        c.clear();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(m, n);
 * vector<int> param_1 = obj->flip();
 * obj->reset();
 */
