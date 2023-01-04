class MinStack {
public:
int i=0;
map<pair<int,int>,int> b;
deque<pair<int,int>> c;
    MinStack() {
    }
    void push(int val) {
      b[{val,i}]=1;
      c.push_back({val,i});
      i++;
    }
    void pop() {
       b.erase(c.back());
       c.pop_back();
    }
    int top() {
        return c.back().first;
    }
    
    int getMin() {
        return b.begin()->first.first;
    }
};
