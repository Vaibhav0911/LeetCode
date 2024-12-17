class MinStack {
public:
    
    stack<int> s;
    stack<int> mns;
    
    MinStack() {
        
    }
    
    void push(int val) {
        if(mns.empty() || val <= mns.top())      mns.push(val);
        s.push(val);   
    }
    
    void pop() {
        if(mns.top() == s.top())                 mns.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return mns.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */