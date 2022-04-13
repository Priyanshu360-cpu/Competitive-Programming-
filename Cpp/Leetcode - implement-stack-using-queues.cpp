
class MyStack {
            	deque<int> st;
public:
    MyStack() {
    }
    
    void push(int x) {
        st.push_front(x);
    }
    
    int pop() {
        int l = st.front();
        st.pop_front();
        return l;
    }
    
    int top() {
        return st.front();
    }
    
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
